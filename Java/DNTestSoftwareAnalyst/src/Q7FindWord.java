import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Iterator;


public class Q7FindWord {
	
	public boolean findWordOnText(String word, String text) {
		
		text = text.replace(",", "");
		text = text.replace(";", "");
		text = text.replace(".", "");
		text = text.replace("!", "");
		text = text.replace("?", "");
		
		text = text.toLowerCase();
		
		String strLineList[] = text.split("\n");
				
		for(String line : strLineList) {
			
			String strList[] = line.split(" ");

			for(String str : strList) {
				if(str.contentEquals(word.toLowerCase()))
					return true;
			}			
		}		
		return false;
	}	
}
