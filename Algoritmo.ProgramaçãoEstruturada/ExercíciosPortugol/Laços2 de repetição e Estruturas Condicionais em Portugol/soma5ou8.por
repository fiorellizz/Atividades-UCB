programa {
  funcao inicio() {
    inteiro numero, resto, resultado
    escreva("Digite um n�mero: ")
    leia(numero)
    resto = numero % 2
    se(resto == 0){
      resultado = numero + 5
      escreva("O n�mero � PAR e somado com 5 fica ",resultado,"!")
    } senao {
      resultado = numero + 8
      escreva("O n�mero � IMPAR e somado com 8 fica ",resultado,"!")
    }
  }
}