programa {
  funcao inicio() {
    real valorX, resultado
    escreva("Qual valor X da fun��o: ")
    leia(valorX)
    se(valorX == 2){
      escreva("N�o � possivel dividir um n�mero por 0")
    } senao{
    resultado = (8)/((2-(valorX)))
    escreva("Valor da equa��o � ",resultado,"!")
    }
  }
}
