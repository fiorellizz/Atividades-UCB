package tarefas;

import java.time.LocalDate; //usada para representar uma data completa (dia, mês e ano)

public class Tarefa {
    private String descricao;
    private String status;
    private LocalDate prazo;
    private Usuario usuarioCriador;

    public Tarefa(){
        this.descricao = "Sem descrição";
        this.status = "Pendente";
        this.prazo = LocalDate.now().plusDays(7); //prazo de 7 dias pré-estabelecido a partir da data atual
        this.usuarioCriador = new Usuario();
    }

    public Tarefa(String descricao, String status, LocalDate prazo, Usuario usuarioCriador) {
        this.descricao = descricao;
        this.status = status;
        this.prazo = prazo;
        this.usuarioCriador = usuarioCriador;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public LocalDate getPrazo() {
        return prazo;
    }

    public void setPrazo(LocalDate prazo) {
        this.prazo = prazo;
    }

    public Usuario getUsuarioCriador() {
        return usuarioCriador;
    }

    public void setUsuarioCriador(Usuario usuarioCriador) {
        this.usuarioCriador = usuarioCriador;
    }

    // Verificação de tarefaa atrasadas (se houver)
    public boolean isAtrasada() {
        return LocalDate.now().isAfter(prazo); //compara a data ATUAL com o PRAZO : Biblioteca LocalDate
    }

    // Alteração do status usando switch-case
    public void alterarStatus(int opcao) {
        switch (opcao) {
            case 1:
                this.status = "Pendente";
                break;
            case 2:
                this.status = "Em Andamento";
                break;
            case 3:
                this.status = "Concluída";
                break;
            default:
                System.out.println("Opção inválida. Status não alterado.");
        }
    }

    //método sobrescrito usado para fornecer uma saída específica para esta classe
    @Override
    public String toString() {
        return "Tarefa: " + descricao + "\nStatus: " + status + "\nPrazo: " + prazo + "\nCriador: " + usuarioCriador.getNome() + "\nDepartamento: " + usuarioCriador.getDepartamento() +"\n------------------------\n";
    }
}
