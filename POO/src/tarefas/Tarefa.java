package tarefas;

public class Tarefa {
    private String descricao;
    private String status;
    private int prazo;

    public Tarefa(String descricao, String status, int prazo){
        this.descricao = descricao;
        this.status = status;
        this.prazo = prazo;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public int getPrazo() {
        return prazo;
    }

    public void setPrazo(int prazo) {
        this.prazo = prazo;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }
}
