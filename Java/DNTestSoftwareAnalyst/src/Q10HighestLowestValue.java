import java.util.Scanner;

public class Q10HighestLowestValue {
	
	public int[] findHighestLowestValue() {
		
		int[] highestLowestValue = new int[2];
		int[] input = new int[10];
		
		Scanner in = new Scanner(System.in);
		
		for (int i = 0; i < input.length; i++) {
			System.out.print("Enter " + (i+1) + " value: ");
			input[i] = in.nextInt();
			
			if(i == 0) {
				highestLowestValue[0] = input[i];
				highestLowestValue[1] = input[i];
				continue;
			}
			
			if(input[i] < highestLowestValue[0]) 
				highestLowestValue[0] = input[i];
			
			if(input[i] > highestLowestValue[1]) 
				highestLowestValue[1] = input[i];
		}
		
		return highestLowestValue;
	}
}
