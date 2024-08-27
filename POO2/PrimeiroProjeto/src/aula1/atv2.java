package aula1;

import java.util.Scanner;
import javax.swing.JOptionPane;

public class atv2 {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		double n1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro nota: "));
		double n2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo nota: "));
		double n3 = Double.parseDouble(JOptionPane.showInputDialog("Digite o terceira nota: "));

		System.out.println("Resultado da media "+ ((n1 + n2 + n3)/3));
		
		
		System.out.println("Digite o valor em Cº: ");
		double c = entrada.nextDouble();
		double f = c * 1.8 + 32;
		System.out.printf("%.0f Cº é igual a %.0f Fº\n", c, f);
		
		System.out.println("Digite sua media: ");
		double media = entrada.nextDouble();
		String status = media >= 7 ? "Aprovado" : "Reprovado";
		System.out.println(status);
		
		entrada.close();

	}

}
