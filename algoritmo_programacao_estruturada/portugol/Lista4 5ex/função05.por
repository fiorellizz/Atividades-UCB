programa {
  funcao inicio() {
    real valorX, resultado
    escreva("Qual valor X da função: ")
    leia(valorX)
    se(valorX == 2){
      escreva("Não é possivel dividir um número por 0")
    } senao{
    resultado = (8)/((2-(valorX)))
    escreva("Valor da equação é ",resultado,"!")
    }
  }
}
