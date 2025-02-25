programa {
  funcao inicio() {
    real saldo, credito

    escreva("Qual saldo médio: ")
    leia(saldo)

    se(saldo > 0 e saldo <= 500){
      escreva("Nenhum crédito foi liberado!")
    } senao se(saldo >= 501 e saldo <= 1000){
      credito = saldo * 0.30
      escreva("Crédito APROVADO, total de ",credito,"!")
    } senao se(saldo >= 1001 e saldo <= 3000){
      credito = saldo * 0.40
      escreva("Crédito APROVADO, total de ",credito,"!")
    } senao se(saldo >= 3001){
      credito = saldo * 0.50
      escreva("Crédito APROVADO, total de ",credito,"!")
    } senao {
      //nda
    }
  }
}
