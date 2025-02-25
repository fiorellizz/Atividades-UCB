programa {
  funcao inicio() {
    inteiro numeroTabuada, contador, limite, resultado

    contador=0

    escreva("Digite a tabuada a ser calculada: ")
    leia(numeroTabuada)

    escreva("Digite até qual número a tabuada deve ser calculada: ")
    leia(limite)

    faca{
      resultado= numeroTabuada*contador
      escreva(numeroTabuada, "x", contador, "=", resultado, "\n")
      contador++

    } enquanto (contador<=limite)

  
  }
}
