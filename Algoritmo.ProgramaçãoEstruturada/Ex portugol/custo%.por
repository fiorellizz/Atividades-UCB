programa {
  funcao inicio() {
    real = custo, venda, porcentagem
    
    escreva ("Qual valor de custo do produto: ")
    leia(custo)
    escreva("Qual o acr�scimo em porcentagem '%' que o valor ir� receber: ")
    leia(porcentagem)
    venda= (custo*(porcentagem/100))+custo
    
    escreva("O valor com o acr�simo ser� de: ",venda," reais.")
  }
}
