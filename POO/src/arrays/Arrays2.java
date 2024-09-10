package arrays;

import java.util.ArrayList;

public class Arrays2 {

    public static void main(String[] args) {
        ArrayList<PessoaC> pessoas = new ArrayList<>();

        PessoaC p1 = new PessoaC();
        p1.nome = "Vitor";
        p1.idade = 20;


        PessoaC p2 = new PessoaC();
        p2.nome = "Guilherme";
        p2.idade = 19;

        pessoas.add(p1);
        pessoas.add(p2);

        for (PessoaC p : pessoas){
            System.out.println(p.nome + " " + p.idade);
        }

        for (PessoaC pp : pessoas){
            System.out.println(pp);
        }

    }

}
