import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
	
	Locale.setDefault(Locale.US);
	Scanner sc = new Scanner(System.in);
	
	double x, y;
	
	System.out.println("Digite dois numeros:");
	x = sc.nextDouble();
	y = sc.nextDouble();
	
	while (x != y) {
		if (x < y) {
			System.out.println("Crescente!");
		}
		else {
			System.out.println("Decrescente!");
		}
		System.out.println("Digite dois numeros:");
		x = sc.nextDouble();
		y = sc.nextDouble();
	}
	
	sc.close();		
		
	}

}
