import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Scanner;

public class Program {
	public static void main(String[] args) throws IOException {
		
		Scanner in = new Scanner(System.in);
		int answer;
		
		menu();
		answer = in.nextInt();
		
		switch (answer) {
		case 7:
			System.out.println("Answer to 7th question");
			System.out.println();
			
			Path fileName = Path.of("C:\\Users\\Carlos Bruno\\Diebold Nixdorf\\Java\\DNTestSoftwareAnalyst\\src\\example.txt");
			String text = Files.readString(fileName);
			String word;
			
			System.out.println("# File::\n");
	        System.out.println(text);
			System.out.println("# Find the word: ");
			word = in.next();
			
			Q7FindWord question7 = new Q7FindWord();
			
	        if(question7.findWordOnText(word, text))
	        	System.out.println("The word \"" + word + "\" can be found in the text!");
	        else
	        	System.out.println("The word \"" + word + "\" can not be found in the text!");
			
			
			break;
		case 8:
			System.out.println("Answer to 8th question");
			System.out.println();
			
			Path fileName1 = Path.of("C:\\Users\\Carlos Bruno\\Diebold Nixdorf\\Java\\DNTestSoftwareAnalyst\\src\\example.txt");
			String text1 = Files.readString(fileName1);
			
			Q8FindBiggestWord question8 = new Q8FindBiggestWord();
			
			System.out.println("# File::\n");
	        System.out.println(text1);
			System.out.println("# The biggest word found on text is: " + question8.findBiggestWordOnText(text1));
			
			break;
		case 9:
			System.out.println("Answer to 9th question");
			System.out.println();
			
			Path fileName2 = Path.of("C:\\Users\\Carlos Bruno\\Diebold Nixdorf\\Java\\DNTestSoftwareAnalyst\\src\\example.txt");
			String text2 = Files.readString(fileName2);
			
			Q9Find5BiggestWord question9 = new Q9Find5BiggestWord();
			
			System.out.println("# File::\n");
	        System.out.println(text2);
	        System.out.print("# The 5 biggest word found on text are:");
	        
	        String [] srtList = question9.find5FirstBiggestWordOnText(text2);
	        
	        for(String str : srtList) {
	        	System.out.print(" " + str);
	        }
	        	        
			break;
		case 10:
			System.out.println("Answer to 10th question");
			System.out.println();
			Q10HighestLowestValue question10 = new Q10HighestLowestValue();
			
			int[] highestLowestValue = question10.findHighestLowestValue();
			
			System.out.println("#The highest value is " + highestLowestValue[1]);
			System.out.println("#The lowest value is " + highestLowestValue[0]);
			
			break;
		case 11:
			System.out.println("Answer to 11th question");
			System.out.println();
			
			Device device1 = new Device(5);
			Device device2 = new Device(12);
			Device device3 = new Device(20);
			
			PowerSupply powerSupply = new PowerSupply(30);
			
			if(powerSupply.addDevice(device1))
				System.out.println("Device 1 added successfully");
			if(powerSupply.addDevice(device2))
				System.out.println("Device 2 added successfully");
			if(!powerSupply.addDevice(device3))
				System.out.println("Device 3 did not add");
			
			powerSupply.removeDevice(device2);
			
			if(powerSupply.addDevice(device3))
				System.out.println("Device 3 added successfully");
			
			break;

		default:
			break;
		}
	}
	
	static void menu() {
		System.out.println("Answer Questions");
		System.out.println();
		System.out.println("7. question");
		System.out.println("8. question");
		System.out.println("9. question");
		System.out.println("10. question");
		System.out.println("11. question");
		System.out.println("# Select a answer:");
	}
}
