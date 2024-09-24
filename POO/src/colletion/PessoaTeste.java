package colletion;

import java.util.ArrayList;

public class PessoaTeste {
    public static void main(String[] args) {
        ArrayList<Pessoa> lista = new ArrayList<>();

        Pessoa p1 = new Pessoa("Fiorelli", 19);
        Pessoa p2 = new Pessoa("João", 19);

        lista.add(p1);
        lista.add(p2);
        lista.add(new Pessoa("Mano plug", 89));

        System.out.println("Tamanho lista: " + lista.size());

        System.out.println(lista.get(1).nome);

        System.out.println("Lista Atual");

        for (Pessoa p : lista){
            System.out.println("Nome: " + p.nome + " - Idade: " + p.idade);
        }

        lista.remove(0);

        System.out.println("Lista Atualizada, depois de remover");

        for (Pessoa p : lista){
            System.out.println("Nome: " + p.nome + " - Idade: " + p.idade);
        }

        System.out.println("Lista sendo printada com o metodo da Classe");

        for (Pessoa p : lista){
            System.out.println(p);
        }

    }
}
