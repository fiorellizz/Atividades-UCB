programa {
  funcao inicio() {
    inteiro idade
    escreva("Digite sua idade: ")
    leia(idade)
    se(idade < 16)
    {
      escreva("N�o eleitor!")
    } senao se(idade >= 18 e idade <= 65){
      escreva("Eleitor obrigat�rio!")
    } senao {
      escreva("Eleitor facultativo!")
    }
  }
}
