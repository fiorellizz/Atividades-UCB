programa {
  funcao inicio() {
    real preco 
    inteiro codigo, quantidade 

    escreva("Digite o c�digo do pedido: ")
    leia(codigo)

    escreva("Digite a quantidade do pedido: \n")
    leia(quantidade)

    escolha(codigo){
      caso 100:
      preco=1.25*quantidade
      escreva("Voc� pagar� o total de: R$", preco)
      pare
      caso 101:
      preco=1.30*quantidade
      escreva("Voc� pagar� o total de: R$", preco)
      pare
      caso 102: 
      preco=1.50*quantidade
      escreva("Voc� pagar� o total de: R$", preco)
      pare
      caso 103:
      preco=1.15*quantidade
      escreva("Voc� pagar� o total de: R$", preco)
      pare
      caso 104:
      preco=1.30*quantidade
      escreva("Voc� pagar� o total de: R$", preco)
      pare
      caso 105:
      preco=1.0*quantidade
      escreva("Voc� pagar� o total de: R$", preco)
    }
  }
}
