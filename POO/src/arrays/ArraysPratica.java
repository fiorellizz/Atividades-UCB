package arrays;

import java.util.Arrays;

public class ArraysPratica {

    public static void main(String[] args) {

        double[] notas = new double[4];
        notas[0] = 7.5;
        notas[1] = 7;
        notas[2] = 8;
        notas[3] = 8.5;
        System.out.println("Array criado com contrutor: ");
        for (int i = 0;i < notas.length; i++){
            System.out.println(notas[i]);
        }

        double[] notas2 = {7.5, 7, 8.5, 8};
        System.out.println("Array criado direto e printando com for: ");
        for (int i = 0;i < notas2.length;i++){
            System.out.println(notas2[i]);
        }

        System.out.println("Printando com String o vetor das notas: ");
        String resultado = Arrays.toString(notas2);
        System.out.println(resultado);

        System.out.println("Imprimindo ultilizando forEach: ");
        for (double n : notas2){
            System.out.println(n);
        }

    }

}
