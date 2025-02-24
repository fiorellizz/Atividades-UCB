programa {
  funcao inicio() {
    real = custo, venda, porcentagem
    
    escreva ("Qual valor de custo do produto: ")
    leia(custo)
    escreva("Qual o acréscimo em porcentagem '%' que o valor irá receber: ")
    leia(porcentagem)
    venda= (custo*(porcentagem/100))+custo
    
    escreva("O valor com o acrésimo será de: ",venda," reais.")
  }
}
