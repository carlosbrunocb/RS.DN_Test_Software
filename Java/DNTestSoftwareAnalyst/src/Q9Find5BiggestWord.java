
public class Q9Find5BiggestWord {
	
	public String[] find5FirstBiggestWordOnText(String text) {
		
		text = text.replace(",", "");
		text = text.replace(";", "");
		text = text.replace(".", "");
		text = text.replace("!", "");
		text = text.replace("?", "");
				
		String str[] = new String[5];
		
		Q8FindBiggestWord question8 = new Q8FindBiggestWord();
		
		str[0] = question8.findBiggestWordOnText(text);
		text = text.replace(str[0], "");		
		str[1] = question8.findBiggestWordOnText(text);
		text = text.replace(str[1], "");
		str[2] = question8.findBiggestWordOnText(text);
		text = text.replace(str[2], "");
		str[3] = question8.findBiggestWordOnText(text);
		text = text.replace(str[3], "");
		str[4] = question8.findBiggestWordOnText(text);
		text = text.replace(str[4], "");
		
		return str;
	}
}
