package metodos;

import javax.swing.*;

public class MetodosTeste {
    public static void main(String[] args) {
        Metodos m = new Metodos();

        int option = Integer.parseInt(JOptionPane.showInputDialog("Digite sua escolha: "));

        System.out.printf("1");

        switch (option){
            case 1:
                break;

            case 2:
                break;
        }

        System.out.println("Resultado da soma: ");
        m.soma();

        System.out.println("Resultado da subtracao: ");
        m.subtracao(10, 10);

        System.out.println("Resultado da multiplicacao: ");
        int result = m.multiplicacao();
        System.out.println(result);

        System.out.println("Resultado da divisao: ");
        int result2 = m.divisao(7, 7);
        System.out.println(result2);
    }
}
