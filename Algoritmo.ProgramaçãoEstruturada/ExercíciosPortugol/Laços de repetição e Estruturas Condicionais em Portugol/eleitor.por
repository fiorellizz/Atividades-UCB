programa {
  funcao inicio() {
    inteiro idade
    escreva("Digite sua idade: ")
    leia(idade)
    se(idade < 16)
    {
      escreva("Não eleitor!")
    } senao se(idade >= 18 e idade <= 65){
      escreva("Eleitor obrigatório!")
    } senao {
      escreva("Eleitor facultativo!")
    }
  }
}
