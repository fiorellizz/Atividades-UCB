programa {
  funcao inicio() {
    real valoretiqueta, valorfinal
    inteiro pagamento

    escreva("Valor da etiqueta: ")
    leia(valoretiqueta)
    escreva("Qual forma de pagamento:\n1 - À vista em dinheiro ou cheque\n2 - À vista no cartão de crédito\n3 - Em duas vezes\n4 - Em três vezes\n")
    leia(pagamento)

    se(pagamento == "1"){
      valorfinal = valoretiqueta - (valoretiqueta * 0.1)
      escreva("Você ganhou 10% de desconto e seu produto ficou no total de R$",valorfinal,"!")
    } senao se(pagamento == "2"){
      valorfinal = valoretiqueta - (valoretiqueta * 0.15)
      escreva("Você ganhou 15% de desconto e seu produto ficou no total de R$",valorfinal,"!")
    } senao se(pagamento == "3"){
      valorfinal = valoretiqueta
      escreva("Seu produto ficou no total de R$",valorfinal,"!")
    } senao se(pagamento == "4"){
      valorfinal = valoretiqueta + (valoretiqueta * 0.1)
      escreva("Seu produto ganhou 10% de juros e ficou no total de R$",valorfinal,"!")
    } senao {
      escreva("Forma de pagamento inválida!")
    }
  }
}
