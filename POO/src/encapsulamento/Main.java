package encapsulamento;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria();
        Scanner sc = new Scanner(System.in);
        int option = 1;


            System.out.println("1 - Consultar Nome");
            System.out.println("2 - Alterar Nome");
            System.out.println("3 - Consultar Numero da conta");
            System.out.println("4 - Consultar Saldo");
            System.out.println("5 - Depositar");
            System.out.println("6 - Sacar");
            System.out.println("0 - Sair");
            option = sc.nextInt();

            switch (option){
                case 1:
                    System.out.println(conta.getTitular());
                    break;

                case 2:
                    String newTitular = sc.nextLine();
                    conta.setTitular(newTitular);
                    break;

                case 3:
                    System.out.println(conta.getNumeroConta());
                    break;

                case 4:
                    System.out.println(conta.getSaldo());
                    break;

                case 5:
                    Double newDeposito = sc.nextDouble();
                    conta.depositar(newDeposito);
                    break;

                case 6:
                    Double newSaque = sc.nextDouble();
                    conta.sacar(newSaque);
                    break;

                default:
                    System.out.println("Option invalue");
                    break;

        }
    }
}
