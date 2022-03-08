import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

	Locale.setDefault(Locale.US);
	Scanner sc = new Scanner(System.in);
	
	int N, i, j, cont;
	
	System.out.println("Qual a ordem da matriz: ");
	N = sc.nextInt();
	
	int[][] mat = new int[N][N];
	
	for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
        	System.out.print("Elemento [" + i + ", " + j + "] :");
        	mat[i][j] = sc.nextInt();
        }
	}
	
	System.out.println("DIAGONAL PRINCIPAL:");
	for (i = 0; i < N; i++) {      
        System.out.print(mat[i][i] + " ");	
	}
	
	cont = 0;
	for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
        	if (mat[i][j] < 0) {
        		cont++;
        	}
        }
	}
	System.out.println("\nQUANTIDADE DE NEGATIVOS = " + cont);
	
	sc.close();
	}

}
