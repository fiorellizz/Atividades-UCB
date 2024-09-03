package pratica;

public class ProdutoTest {
    public static void main(String[] args) {

        var p1 = new Produto();
        p1.nome = "Feijão";
        p1.preco = 8.99;
        p1.desconto = 0.10;

        System.out.printf("Nome: %s\nPreco: %.2f\nDesconto: %.1f %%\n", p1.nome, p1.preco, (p1.desconto * 100));
        System.out.printf("Valor final: %.2f", p1.preco * (1 - p1.desconto));
    }
}
