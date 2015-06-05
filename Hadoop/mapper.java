import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URL;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.filecache.DistributedCache;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.MapReduceBase;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapreduce.Mapper.Context;


public class mapper extends MapReduceBase implements Mapper<LongWritable, Text, Text, Text>{
	
	private String productID, body; 
	
	//gave up on hash table, though it would be better, 
	ArrayList<String> positiveWords = new ArrayList<String>();
	ArrayList<String> negativeWords = new ArrayList<String>();
	
	
	public void map(LongWritable key, Text value, OutputCollector<Text, Text> output, Reporter report) throws IOException {
		int score = 0;
		String feeling = "nothing";
		String word;
		
		String review = value.toString();
		String splitreview[] = review.split("\t");
		productID = splitreview[1];
		if(splitreview.length>7&&splitreview[7]!=null){//had some null bodies, some class mates suggested that there are reviews 
														// that are not long enough.
		body = splitreview[7];
		}
		else
			body="";
			
		
		
		StringTokenizer breakingApart = new StringTokenizer(body);
		 
		while(breakingApart.hasMoreTokens()){
			//If word in body exists in hash table of positive and negative words we alter the score accordingly
			word = breakingApart.nextToken();
			word = word.replaceAll("[^A-Za-z]","");
			if (positiveWords.contains(word)){
				score += 1;
				feeling = "got atleast one word in array list";
			} else if (negativeWords.contains(word)){
				score -= 1;
				feeling = "got atleast one word in array list";
			}
		}
		
		//output.collect(new Text(productID), new Text(feeling));
		
		if (score > 0){
			feeling = "positive";
		} else if (score < 0){
			feeling = "negative";
		} else {
			feeling = "neutral";
		}
		
		//Output key-value pair of (ProductID, feeling)
		output.collect(new Text(productID), new Text(feeling));
		
		
	}
	
	public void configure(JobConf job){

	   
		try {
		//	FileSystem fs = FileSystem.get(URI.create("https://s3.amazonaws.com/data432/positive.txt"),  confPos);
		//i couldnt get this to work, so i just uploaded files
			FileSystem fs = FileSystem.get(new URI("s3://8tjv/"),job);
			
			
			String path1 = job.get("path1");
			Path p1 = new Path(path1);
		    //Read positive file from uri in path1
		    BufferedReader cacheReader = new BufferedReader(new InputStreamReader(fs.open(p1)));
		    // now one can use BufferedReader's readLine() to read data
		    String line;
		    while ((line = cacheReader.readLine()) != null){
		    	//this was useful from the lectures
		    		positiveWords.add(line.trim());
		    	
		    }
		    
		    String path2 = job.get("path2");
			Path p2 = new Path(path2);
		    //Read negative.txt
		    BufferedReader cacheReader2 = new BufferedReader(new InputStreamReader(fs.open(p2)));
		    // now one can use BufferedReader's readLine() to read data
		    while ((line = cacheReader2.readLine()) != null){
		    	
		    		negativeWords.add(line.trim());
		    
		    }
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (URISyntaxException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	    
	}
}
