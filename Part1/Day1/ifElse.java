import java.util.*;
public class ifElse {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int mark;
		
		System.out.print("Enter your mark: ");
		mark = sc.nextInt();
		sc.close();
		
		if(mark > 80)
			System.out.println("A");
		else if(mark > 60)
			System.out.println("B");
		else if(mark > 50)
			System.out.println("C");
		else if(mark > 45)
			System.out.println("D");
		else if(mark > 25)
			System.out.println("E");
		else
			System.out.println("F");
	}
}
