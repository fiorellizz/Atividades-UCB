package datas;

import java.util.Scanner;
import javax.swing.JOptionPane;

public class DataTeste {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        var data = new Data();

        data.dia = Integer.parseInt(JOptionPane.showInputDialog("Digite o dia: "));
        data.mes = Integer.parseInt(JOptionPane.showInputDialog("Digite o mes: "));
        data.ano = Integer.parseInt(JOptionPane.showInputDialog("Digite o ano: "));

        JOptionPane.showMessageDialog(null, String.format("Data: %d/%d/%d", data.dia, data.mes, data.ano));

        entrada.close();
    }
}