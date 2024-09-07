package desafio;

public class Livro {

    String nome = "Diario Otario";
    String autor = "Banana";
    String titulo = "Querido diario otario";
    final int anoPublicacao = 1996;

    String mostrarDados(){
        return String.format("Nome: %s\nAutor: %s\nTitulo: %s\nAno: %d", nome, autor, titulo, anoPublicacao);
    }

}
