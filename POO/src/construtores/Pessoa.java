package construtores;

public class Pessoa {
    String nome;
    int idade;

    Pessoa(){

    }

    public Pessoa(String nome) {
        this.nome = nome;
    }

    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }
}
