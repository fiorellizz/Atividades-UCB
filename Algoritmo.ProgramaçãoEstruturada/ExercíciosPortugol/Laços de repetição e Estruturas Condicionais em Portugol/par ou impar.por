programa {
  funcao inicio() {
    inteiro numero, resto
    escreva("Digite um número: ")
    leia(numero)
    resto = numero % 2
    se(resto == 0){
      escreva("O número é PAR")
    } senao {
      escreva("O número é IMPAR")
    }
  }
}
