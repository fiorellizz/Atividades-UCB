programa {
  funcao inicio() {
    inteiro valor, numeroPositivo=0, numeroNegativo=0, soma=0, quantidadeTotal=0 
    real media=0, percentualPositivo=0, percentualNegativo=0

    faca{
      escreva("Digite um n�mero do grupo dos INTEIROS: (digite 0 para parar): ")
      leia(valor)

    se(valor>0){
      numeroPositivo=numeroPositivo+1
    } senao se(valor<0){
      numeroNegativo=numeroNegativo+1
    }

    se(valor!=0){
      soma= soma + valor
    }
    
    quantidadeTotal++

    } enquanto (valor!=0)

    se(numeroPositivo+numeroNegativo>0){
      quantidadeTotal=quantidadeTotal-1
      media= (soma/quantidadeTotal)
      percentualPositivo= (numeroPositivo/(numeroPositivo+numeroNegativo))*100
      percentualNegativo= (numeroNegativo/(numeroPositivo+numeroNegativo))*100
      
      escreva("A m�dia dos valores: ", media)
      escreva("\nA quantidade de n�meros positivos: ", numeroPositivo)
      escreva("\nA quantidade de n�meros negativos: ", numeroNegativo)
      escreva("\nO percentual de valores positivos: ", percentualPositivo)
      escreva("\nO percentual de valores negativos: ", percentualNegativo)
    } senao {
      escreva("Nenhum valor foi inserido.")
    }
  }
}
