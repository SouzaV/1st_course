
import java.util.Scanner;
import java.util.Locale;

public class Main {
	
	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int x, y, troca, i, soma;
		
		System.out.println("Digite dois numeros: ");
		x = sc.nextInt();
		y = sc.nextInt();
		
		if (x > y) {
			troca = x;
			x = y;
			y = troca;
		}
		
		soma = 0;
		for (i = x+1; i < y; i++) {
			if (i % 2 != 0) {
				soma = soma + i;
			}
		}
		System.out.print("SOMA IMPARES = " + soma);
		
	sc.close();
	}

}
