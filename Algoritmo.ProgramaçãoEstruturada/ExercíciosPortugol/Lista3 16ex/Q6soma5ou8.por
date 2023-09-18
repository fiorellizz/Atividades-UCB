programa {
  funcao inicio() {
    inteiro numero, resto, resultado
    escreva("Digite um número: ")
    leia(numero)
    resto = numero % 2
    se(resto == 0){
      resultado = numero + 5
      escreva("O número é PAR e somado com 5 fica ",resultado,"!")
    } senao {
      resultado = numero + 8
      escreva("O número é IMPAR e somado com 8 fica ",resultado,"!")
    }
  }
}