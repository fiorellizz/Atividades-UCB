programa {
  funcao inicio() {
    inteiro numero, resto
    escreva("Digite um n�mero: ")
    leia(numero)
    resto = numero % 2
    se(resto == 0){
      escreva("O n�mero � PAR")
    } senao {
      escreva("O n�mero � IMPAR")
    }
  }
}
