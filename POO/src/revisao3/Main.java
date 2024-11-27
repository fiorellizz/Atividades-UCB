package revisao3;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Aluno> listaAlunos = new ArrayList<>();

        Aluno a1 = new Aluno("Aluno 01", 4);
        Aluno a2 = new Aluno("Aluno 02", 7);
        Aluno a3 = new Aluno("Aluno 03", 10);

        listaAlunos.add(a1);
        listaAlunos.add(a2);
        listaAlunos.remove(0);
        listaAlunos.add(a3);

        System.out.println(listaAlunos.get(0).getNome());
    }
}

class Aluno {
    private String nome;
    private double nota;

    public Aluno(String nome, double nota) {
        this.nome = nome;
        this.nota = nota;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getNota() {
        return nota;
    }

    public void setNota(double nota) {
        this.nota = nota;
    }
}