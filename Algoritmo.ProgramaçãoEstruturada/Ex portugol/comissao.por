programa {
  funcao inicio() {
    real = salario, salariof, vendas
    cadeia = nome
    escreva("Nome do vendedor: ")
    leia(nome)
    escreva("Salário fixo: ")
    leia(salario)
    escreva("Total de vendas: ")
    leia(vendas)
    salariof = (0.15*vendas)+(salario)
    escreva("O funcionario ",nome," teve seu salário fixo ",salario, " e seu salário com a comissão, ficou igual: ",salariof,)
  }
}
