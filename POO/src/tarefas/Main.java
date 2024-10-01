package tarefas;

import java.util.Scanner;
import java.util.ArrayList;
import javax.swing.JOptionPane;
import java.time.LocalDate;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Usuario> usuarios = new ArrayList<>(); //permite armazenar os usuários ocupando espaço na memória conforme eles vão sendo cadastrados
        ArrayList<Tarefa> tarefas = new ArrayList<>();
        int option = 0;

        do {
            System.out.println("\n▂▂▂▂▂▂ ☑✍ SISTEMA DE GESTÃO DE TAREFAS ✍☑ ▂▂▂▂▂▂\n");
            System.out.println("1. Cadastrar Usuário");
            System.out.println("2. Criar Nova Tarefa");
            System.out.println("3. Ver Todas as Tarefas");
            System.out.println("4. Alterar Status de uma Tarefa");
            System.out.println("5. Verificar Tarefas Atrasadas");
            System.out.println("0. Sair");
            System.out.print("Escolha uma opção: ");
            option = sc.nextInt();
            sc.nextLine();

            switch (option) {
                case 1:
                    // Cadastrar usuário
                    System.out.print("Digite o nome do usuário: ");
                    String nomeUsuario = sc.nextLine();
                    System.out.print("Digite o departamento do usuário: ");
                    String departamento = sc.nextLine();
                    Usuario usuario = new Usuario(nomeUsuario, departamento);
                    usuarios.add(usuario);
                    JOptionPane.showMessageDialog(null, "Usuário cadastrado com sucesso!", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
                    break;

                case 2:
                    // Criar tarefa
                    if (usuarios.isEmpty()) {
                        System.out.println("Nenhum usuário cadastrado. Cadastre um usuário primeiro.");
                    } else {
                        System.out.print("Digite a descrição da tarefa: ");
                        String descricao = sc.nextLine();
                        System.out.print("Digite o prazo da tarefa (AAAA-MM-DD): ");
                        String prazoStr = sc.nextLine();
                        LocalDate prazo = LocalDate.parse(prazoStr);

                        // Campo para inserir responsável pela tarefa
                        System.out.println("Escolha o usuário criador da tarefa:");
                        for (int i = 0; i < usuarios.size(); i++) {
                            System.out.println(i + ". " + usuarios.get(i).getNome());
                        }
                        int usuarioIndice = sc.nextInt();
                        sc.nextLine();
                        if (usuarioIndice >= 0 && usuarioIndice < usuarios.size()) {
                            Usuario usuarioCriador = usuarios.get(usuarioIndice);
                            Tarefa tarefa = new Tarefa(descricao, "Pendente", prazo, usuarioCriador);
                            tarefas.add(tarefa);
                            JOptionPane.showMessageDialog(null, "Tarefa criada com sucesso!", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
                        } else {
                            JOptionPane.showMessageDialog(null, "Índice de usuário inválido.", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
                        }
                    }
                    break;

                case 3:
                    // lista todas as tarefas
                    if (tarefas.isEmpty()) {
                        JOptionPane.showMessageDialog(null, "Nenhuma tarefa cadastrada.", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
                    } else {
                        System.out.println("\n------- Lista de Tarefas -------");
                        for (Tarefa tarefa : tarefas) {
                            System.out.println(tarefa);
                        }
                    }
                    break;

                case 4:
                    // Altera o status de uma tarefa
                    if (tarefas.isEmpty()) {
                        System.out.println("Nenhuma tarefa cadastrada.");
                    } else {
                        System.out.println("Digite o índice da tarefa que deseja alterar o status: ");
                        int indice = sc.nextInt();
                        if (indice >= 0 && indice < tarefas.size()) {
                            Tarefa tarefa = tarefas.get(indice);
                            System.out.println("Alterando status da tarefa: " + tarefa.getDescricao());
                            System.out.println("Escolha o novo status:");
                            System.out.println("1. Pendente ✘");
                            System.out.println("2. Em Andamento 🕖");
                            System.out.println("3. Concluída ✔");
                            int novoStatus = sc.nextInt();
                            tarefa.alterarStatus(novoStatus);
                            JOptionPane.showMessageDialog(null, "Status alterado para: " + tarefa.getStatus(), "Alteração de Status", JOptionPane.INFORMATION_MESSAGE);
                        } else {
                            System.out.println("Índice de tarefa inválido.");
                        }
                    }
                    break;

                case 5:
                    // Verifica as tarefas atrasadas
                    System.out.println("\n------- Tarefas Atrasadas -------\n");
                    boolean encontrouAtrasadas = false;
                    for (Tarefa tarefa : tarefas) {
                        if (tarefa.isAtrasada()) {
                            System.out.println(tarefa);
                            encontrouAtrasadas = true;
                        }
                    }
                    if (!encontrouAtrasadas) {
                        JOptionPane.showMessageDialog(null, "Nenhuma tarefa atrasada.", "Mensagem", JOptionPane.INFORMATION_MESSAGE);
                    }
                    break;

                case 0:
                    System.out.println("Saindo...\nAté mais, Volte sempre!\n\nINFORMAÇÕES:\nCriado por alunos do professor Ranyelson da Universidade Católica de Brasília UCB\n-Ana Beatriz Chaves\n-Anabell Roanes\n-Nicole Freitas\n-Filipe Souza");
                    break;

                default:
                    System.out.println("Opção inválida.");
            }

        } while (option != 0);

        sc.close();
    }
}
