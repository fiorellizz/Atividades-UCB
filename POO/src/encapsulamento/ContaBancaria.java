package encapsulamento;

public class ContaBancaria {
    private String titular;
    private int numeroConta;
    private double saldo;

    public ContaBancaria(){
        this.titular = "Fiorelli";
        this.numeroConta = 0001;
        this.saldo = 0;
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public int getNumeroConta() {
        return numeroConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void depositar(double saldo) {
        if (saldo < 0){
            System.out.println("Não e possivel depositar valores negativos");
            return;
        } else {
            this.saldo += saldo;
        }
    }

    public void sacar(double saldo) {
        if (saldo > this.saldo) {
            System.out.println("Saldo insuficiente.");
            return;
        } else {
            this.saldo -= saldo;
        }
    }
}