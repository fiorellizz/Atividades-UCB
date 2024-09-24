package colletion;

public class Pessoa {
    String nome;
    int idade;

    Pessoa (String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }

    @Override
    public String toString() {
        return "Nome da pessoa: " + nome + " - Idade da pessoa: " + idade;
    }
}
