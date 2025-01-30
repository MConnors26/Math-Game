import java.util.Random;
import java.util.Scanner;

public class Addition_Game {

	public static void main(String[] args) {
		
		Random rand = new Random(System.currentTimeMillis());
		Scanner scan = new Scanner(System.in);
		
		int correct = 0;
		int incorrect = 0;
		int total = 0;
		String play_again;
		
		System.out.println("Welcome to the math game!");
		System.out.println("Type in the answer to the question.");
		
		do {
			int num1 = rand.nextInt(11);
			int num2 = rand.nextInt(11);
			int num3 = num1 + num2;
			
			System.out.println(num1 + " + " + num2 + " = ");
			int ans = scan.nextInt();
			if(ans == num3) {
				System.out.println("Correct!");
				correct ++;
				total++;
			} else {
				System.out.println("Incorrect");
				incorrect++;
				total++;
			}
			System.out.println("Do you want to play again? y or n");
			play_again = scan.next();
			
		}while(play_again.equals("y"));
		
		System.out.println("Great job!");
		System.out.println("Total correct: " + correct);
		System.out.println("Total incorrect: " + incorrect);
		System.out.println("Total rounds: " + total);
	}
}
	
		