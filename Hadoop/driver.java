
import java.net.URI;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.filecache.DistributedCache;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.FileInputFormat;
import org.apache.hadoop.mapred.FileOutputFormat;
import org.apache.hadoop.mapred.JobClient;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.TextInputFormat;
import org.apache.hadoop.mapred.lib.MultipleInputs;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;


public class driver extends Configured implements Tool
{	
	public int run(String[] args) throws Exception{
		
		//get configuration parameters
		JobConf conf = new JobConf(getConf(), driver.class);
		conf.setJobName("Unreduced Scores For Interest Words For Every Review");
		
		//setting key value types for mapper and reducer outputs
		conf.setOutputKeyClass(Text.class);
		conf.setOutputValueClass(Text.class);
		
		//specifying the custom reducer class
		conf.setReducerClass(reducer.class);
		conf.setMapperClass(mapper.class);
		
		//Specifying the input directories(@ runtime) and Mappers independently for inputs from multiple sources
		FileInputFormat.addInputPath(conf, new Path(args[2]));
		
		//Specifying the output directory @ runtime
		FileOutputFormat.setOutputPath(conf, new Path(args[3]));
		
		conf.set("path1",args[0]);
		conf.set("path2",args[1]);

		JobClient.runJob(conf);
		
		FileSystem fs = FileSystem.get(new URI("s3://8tjv/"),conf);
		FileUtil.copyMerge(fs, new Path(args[3]), fs, new Path(args[3]), false, conf,"");
		
	
		return 0;
	}
	
	public static void main(String[] args) throws Exception{
		int res = ToolRunner.run(new Configuration(),  new driver(), args);
		System.exit(res);
	}
	
}
