programa {
  funcao inicio() {
    inteiro valorA, valorB, valorC
    
    escreva("Digite o primeiro valor: ")
    leia(valorA)
    escreva("Digite o segundo valor: ")
    leia(valorB)
    escreva("Digite o terceiro valor: ")
    leia(valorC)

    se(valorA < valorB e valorB < valorC e valorA < valorC){
      escreva("A sequencia em ordem decrescente é ",valorC,", ",valorB,", ",valorA,"!")
    } senao se(valorA < valorB e valorB > valorC e valorA < valorC){
      escreva("A sequencia em ordem decrescente é ",valorB,", ",valorC,", ",valorA,"!")
    } senao se(valorA > valorB e valorB < valorC e valorA < valorC){
      escreva("A sequencia em ordem decrescente é ",valorC,", ",valorA,", ",valorB,"!")
    } senao se(valorA < valorB e valorB > valorC e valorA > valorC){
      escreva("A sequencia em ordem decrescente é ",valorB,", ",valorA,", ",valorC,"!")
    } senao se(valorA > valorB e valorA > valorC e valorB < valorC){
      escreva("A sequencia em ordem decrescente é ",valorA,", ",valorC,", ",valorB,"!")
    } senao se(valorA > valorB e valorA > valorC e valorB > valorC){
      escreva("A sequencia em ordem decrescente é ",valorA,", ",valorB,", ",valorC,"!")
    }
  }
}
