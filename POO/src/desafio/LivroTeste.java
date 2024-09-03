package desafio;

public class LivroTeste {
    public static void main(String[] args) {
        var l1 = new Livro();

        System.out.println("Printando com os dados!");
        System.out.printf("Nome do livro: %s\nAutor do livro: %s\nTitulo do livro: %s\nAno de publicacao: %d\n", l1.nome, l1.autor, l1.titulo, l1.anoPublicacao);
        l1.mostrarDados();
        String info = l1.mostrarDados();
        System.out.println("Printando com a funcao!");
        System.out.println(info);
    }
}
