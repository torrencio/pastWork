import java.io.IOException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;

import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.MapReduceBase;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reducer;
import org.apache.hadoop.mapred.Reporter;


public class reducer extends MapReduceBase implements Reducer<Text, Text, Text, Text>{
	
	//In the reduce we collect all nodes mapped with the same key and check whether the review was
	//negative or positive by summing the values of each
	
	public void reduce(Text key, Iterator<Text> values, OutputCollector<Text, Text> output, Reporter reporter) throws IOException {
		String Review= "Neutral";
		int totalScore = 0;
		
		while (values.hasNext()){
			String val = values.next().toString();
			if (val.equals("positive")){
				totalScore++;
			}else if (val.equals("negative")){
				totalScore--;
			} //neutral do nothing
			//output.collect(key, new Text(val));
		}
		if (totalScore > 0){
			Review = "Positive";
		} else if (totalScore < 0){
			Review = "Negative";
		} //If 0, majority feeling still neutral
		
		output.collect(key, new Text(Review));
		
		
	}
}
