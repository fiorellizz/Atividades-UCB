package aula1;
import java.util.Scanner;
import javax.swing.*;

public class CalculadoraTemp {

	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		
		String nome = JOptionPane.showInputDialog("Digite seu nome: ");
		
		System.out.println("Digite o valor em Cº: ");
		double c = entrada.nextDouble();
		double f = c * 1.8 + 32;
		
		System.out.printf("%.0f Cº é igual a %.0f Fº", c, f);
		
		entrada.close();
	}
}