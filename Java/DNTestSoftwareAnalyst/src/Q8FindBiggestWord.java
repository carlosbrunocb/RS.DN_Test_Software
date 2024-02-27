
public class Q8FindBiggestWord {
	
	public String findBiggestWordOnText(String text) {
		
		text = text.replace(",", "");
		text = text.replace(";", "");
		text = text.replace(".", "");
		text = text.replace("!", "");
		text = text.replace("?", "");
		
		text = text.toLowerCase();
		
		String strLineList[] = text.split("\n");
		String temp = "";
		int tempLength = 0;
				
		for(String line : strLineList) {
			
			String strList[] = line.split(" ");

			for(String str : strList) {
				if(tempLength == 0) {
					temp = str;
					tempLength = temp.length();
					continue;
				}
				
				if(str.length() > tempLength) {
					temp = str;
					tempLength = temp.length();
				}
			}			
		}		
		return temp;
	}
}
