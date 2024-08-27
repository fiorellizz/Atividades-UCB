package aula1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Digite seu nome: ");
		String nome = entrada.nextLine();
		
		System.out.println("Digite seu peso: ");
		double peso = entrada.nextDouble();
		
		System.out.println("Digite sua idade: ");
		int idade = entrada.nextInt();
		
		System.out.println("Digite um numero: ");
		String num1 = entrada.nextLine();
		
		System.out.println("Digite outro numero: ");
		String num2 = entrada.nextLine();
		
		System.out.println("Soma dos dois numero: " + num1 + num2);
		
		double num1ToDouble = Double.parseDouble(num1);
		double num2ToDouble = Double.parseDouble(num2);
		
		System.out.println("Soma dos dois numero: " + (num1ToDouble + num2ToDouble));
		
		
		System.out.printf("Nome: %s Idade: %d Peso: %.2f", nome, idade, peso);
		
		entrada.close();

	}

}
