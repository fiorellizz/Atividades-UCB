programa {
  funcao inicio() {
    real a1, a2, a3

    escreva("Digite o valor A: ")
    leia(a1)

    escreva("Digite o valor B: ")
    leia(a2)

    escreva("Digite o valor C: ")
    leia(a3)

    se ((a1 + a2) < a3){
      escreva("A soma do valor A e do valor B é menor que o valor C")
    } senao {
      escreva("A soma do valor A e do valor B é maior que o valor C")
    }
  }
}
