package aula1;

public class PrimeiroProjeto {

	public static void main(String[] args) {
		
		System.out.println("bah");
		
		double raio = 3.4;
		final double PI = 3.14159;
		double area = PI * (raio* 2);
		
		System.out.println("A area é igual a: " + area);
		
		double n1;
		n1 = 2.0;
		var n2 = 20;
		
		System.out.println(n2);
		
		System.out.println("Olá, tudo bem?");
		String s = "Boa noite";
		System.out.println(s);
		System.out.println(s.concat("!!"));
		s = s.concat("!!!!!!");
		s = s.toLowerCase();
		System.out.println(s.startsWith("boa"));
		System.out.println(s);
		
		var nome = "Victor";
		var sobrenome = "Fiorelli";
		var idade = 20;
		var salario = 25678.56;
		System.out.println(nome.toUpperCase());
		System.out.printf("Nome: %s\nSobrenome: %s\nIdade: %d\nSalario: %.2f\n", nome, sobrenome, idade, salario);
		
		
		double n3 = 10.0;
		double n4 = 20.0;
		
		System.out.println("Soma: " + (n3 + n4));
		
	}
}