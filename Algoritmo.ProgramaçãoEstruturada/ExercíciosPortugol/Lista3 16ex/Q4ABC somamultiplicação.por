programa {
  funcao inicio() {
    inteiro valorA, valorB, valorC

    escreva("O valor A: ")
    leia(valorA)
    escreva("O valor B: ")
    leia(valorB)

    se(valorA == valorB){
      valorC = valorA + valorB
      escreva("O resultado da soma �: ",valorC,"!")
    } senao {
      valorC = valorA * valorB
      escreva("O resultado da multiplica��o �: ",valorC,"!")
    }
    
  }
}
