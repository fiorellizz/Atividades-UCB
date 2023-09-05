programa {
  funcao inicio() {
    inteiro numero, resto, resultado
    escreva("Digite um número: ")
    leia(numero)
    resto = numero % 2
    se(resto == 0){
      resultado = numero * 2
      escreva("O dobro do número é ",resultado,"!")
    } senao {
      resultado = numero * 3
      escreva("O triplo do número é ",resultado,"!")
    }
  }
}