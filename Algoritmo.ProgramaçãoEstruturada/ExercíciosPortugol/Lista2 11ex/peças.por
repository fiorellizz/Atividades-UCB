programa {
  funcao inicio() {
    real salfinal, peca, salariobase
    escreva("Qual foi o n�mero de pe�as vendidas: ")
    leia(peca)
    salariobase = 1240
    se(peca <= 500){
      escreva("Seu sal�rio foi igual a R$ 1.240,00")
    } senao se(peca > 500 e peca <= 750){
      salfinal = salariobase + (0.5 * (peca - 500))
      escreva("Seu sal�rio foi igual a R$ ",salfinal,)
    } senao se(peca > 750){
      salfinal = salariobase + 350 + (0.75 * (peca - 750))
      escreva("Seu sal�rio foi igual a R$ ",salfinal,)
    } senao {
      //nao precisa
    }
  }
}
