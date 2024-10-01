package tarefas;

public class Usuario {
    private String nome;
    private String departamento;

    public Usuario() {
        this.nome = "Desconhecido";
        this.departamento = "Indefinido";
    }

    // Construtor e seus parâmetros: passa a utilizar as informações entregue pelo usuário final para as variáveis
    public Usuario(String nome, String departamento) {
        this.nome = nome;
        this.departamento = departamento;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }
}
