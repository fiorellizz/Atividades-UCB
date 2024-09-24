package tarefas;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Usuario usuario = new Usuario("Fiorelli", "TI");
        Tarefa tarefa = new Tarefa("Fazer Atividades", "Pendente", 5);

        System.out.println("1 - Consultar Nome");
        System.out.println("2 - Alterar Nome");
        System.out.println("3 - Consultar Departamento");
        System.out.println("4 - Alterar Departamento");
        System.out.println("5 - Consultar Descricao");
        System.out.println("6 - Alterar Descricao");
        System.out.println("7 - Consultar Status");
        System.out.println("8 - Alterar Stauts");
        System.out.println("9 - Consultar Prazo");
        System.out.println("10 - Alterar Prazo");
        System.out.println("0 - Sair");

        int option = sc.nextInt();
    }
}
