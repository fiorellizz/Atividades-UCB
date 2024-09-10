package construtores;

public class PessoaTest {
    public static void main(String[] args) {

        Pessoa pessoa = new Pessoa();
        pessoa.nome = "Fiorelli1";
        System.out.println(pessoa.nome);

        Pessoa pessoa2 = new Pessoa("Fiorelli2");
        System.out.println(pessoa2.nome);

        Pessoa pessoa3 = new Pessoa();
        pessoa3.nome = "Fiorelli3";
        System.out.println(pessoa3.nome);

    }
}
