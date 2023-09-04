programa {
  funcao inicio() {
    real peso, altura, imc

    escreva("Qual seu peso: ")
    leia(peso)
    escreva("Qual sua altura: ")
    leia(altura)

    imc = (peso / (altura * altura))

    se(imc < 20){
      escreva("Abaixo do peso!")
    } senao se (imc >= 20 e imc < 25){
      escreva("Peso normal!")
    } senao se (imc >= 25 e imc < 30){
      escreva("Sobre peso!")
    } senao se (imc >= 30 e imc < 40){
      escreva("Obeso!")
    } senao {
      escreva("Obeso Mórbido!")
    }
  }
}
