package classes_e_metodos;

public class PessoaTeste {
    public static void main(String[] args) {
        //dentro de uma classe voce pode ter atributos e metodos


        Pessoa pessoa1 = new Pessoa();
        //Clase - Variavel - Construtor
        pessoa1.nome = "Fiorelli";

        System.out.println(pessoa1.nome);

        pessoa1.somarDoisNumeros();

    }
}
