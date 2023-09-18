programa {
  funcao inicio() {
    real salfinal, peca, salariobase
    escreva("Qual foi o número de peças vendidas: ")
    leia(peca)
    salariobase = 1240
    se(peca <= 500){
      escreva("Seu salário foi igual a R$ 1.240,00")
    } senao se(peca > 500 e peca <= 750){
      salfinal = salariobase + (0.5 * (peca - 500))
      escreva("Seu salário foi igual a R$ ",salfinal,)
    } senao se(peca > 750){
      salfinal = salariobase + 350 + (0.75 * (peca - 750))
      escreva("Seu salário foi igual a R$ ",salfinal,)
    } senao {
      //nao precisa
    }
  }
}
