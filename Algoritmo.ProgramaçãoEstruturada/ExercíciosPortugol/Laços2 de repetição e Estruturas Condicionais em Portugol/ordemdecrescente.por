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
      escreva("A sequencia em ordem decrescente � ",valorC,", ",valorB,", ",valorA,"!")
    } senao se(valorA < valorB e valorB > valorC e valorA < valorC){
      escreva("A sequencia em ordem decrescente � ",valorB,", ",valorC,", ",valorA,"!")
    } senao se(valorA > valorB e valorB < valorC e valorA < valorC){
      escreva("A sequencia em ordem decrescente � ",valorC,", ",valorA,", ",valorB,"!")
    } senao se(valorA < valorB e valorB > valorC e valorA > valorC){
      escreva("A sequencia em ordem decrescente � ",valorB,", ",valorA,", ",valorC,"!")
    } senao se(valorA > valorB e valorA > valorC e valorB < valorC){
      escreva("A sequencia em ordem decrescente � ",valorA,", ",valorC,", ",valorB,"!")
    } senao se(valorA > valorB e valorA > valorC e valorB > valorC){
      escreva("A sequencia em ordem decrescente � ",valorA,", ",valorB,", ",valorC,"!")
    }
  }
}
