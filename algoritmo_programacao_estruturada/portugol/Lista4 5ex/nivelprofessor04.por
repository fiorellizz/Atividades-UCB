programa {
  funcao inicio() {
    real nivel, hora, pagamento
    escreva("Qual nível do professor: ")
    leia(nivel)
    escreva("Quantas horas o professor minitrou de aula: ")
    leia(hora)

    se(nivel == 1){
      pagamento = 54 * hora
      escreva("O salário é R$",pagamento,"!")
    } senao se(nivel == 2){
      pagamento = 55 * hora
      escreva("O salário é R$",pagamento,"!")
    } senao se(nivel == 3){
      pagamento = 57 * hora
      escreva("O salário é R$",pagamento,"!")
    } senao{
      escreva("Nivel inválido!")
    }
  }
}
