programa {
  funcao inicio() {
    real = salario, salariof, vendas
    cadeia = nome
    escreva("Nome do vendedor: ")
    leia(nome)
    escreva("Sal�rio fixo: ")
    leia(salario)
    escreva("Total de vendas: ")
    leia(vendas)
    salariof = (0.15*vendas)+(salario)
    escreva("O funcionario ",nome," teve seu sal�rio fixo ",salario, " e seu sal�rio com a comiss�o, ficou igual: ",salariof,)
  }
}
