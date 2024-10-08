package revisao;

public class Main {
    public static void main(String[] args) {
        Produto produto = new Produto("Arroz", 200, 9);

        double valorComDesconto = produto.aplicarDesconto(10);

        System.out.println(valorComDesconto);
    }
}
