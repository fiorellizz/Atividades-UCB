programa {
  funcao inicio() {
    real altura, contador, maiorAltura, menorAltura

    maiorAltura=0
    menorAltura= 99.99

    para (contador=0; contador<15; contador++ ){
      escreva("Digite a ALTURA EM METROS: ")
      leia(altura)

      se(altura<menorAltura){
        menorAltura=altura
      } senao se(altura>maiorAltura){
        maiorAltura=altura
      }
    }

    escreva("\nA menor altura do grupo é de: ", menorAltura, " metros \nE a maior altura do grupo é de: ", maiorAltura, " metros.")
  }
}
