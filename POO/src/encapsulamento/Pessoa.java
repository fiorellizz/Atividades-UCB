package encapsulamento;

public class Pessoa {
    private String nome;
    private int idade;

    public Pessoa(String nome){
        this.nome = nome;
        this.idade = 19;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }
}
