package revisao2;

public class Main {
    public static void main(String[] args) {

    }
}

class Pessoa {
    private String nome;
    private int idade;

    public Pessoa (String nome, int idade){
        this.nome = nome;
        this.idade = idade;

    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }
}

class Funcionario extends Pessoa{
    private double salario;
    private String cargo;

    public Funcionario (String nome, int idade, double salario, String cargo){
        super(nome, idade);
        this.salario = salario;
        this.cargo = cargo;
    }

    public double calcularSalarioAnual(){
        return (this.salario * 12);
    }
}