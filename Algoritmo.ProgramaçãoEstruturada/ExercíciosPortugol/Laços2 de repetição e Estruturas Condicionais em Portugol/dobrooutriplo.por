programa {
  funcao inicio() {
    inteiro numero, resto, resultado
    escreva("Digite um n�mero: ")
    leia(numero)
    resto = numero % 2
    se(resto == 0){
      resultado = numero * 2
      escreva("O dobro do n�mero � ",resultado,"!")
    } senao {
      resultado = numero * 3
      escreva("O triplo do n�mero � ",resultado,"!")
    }
  }
}