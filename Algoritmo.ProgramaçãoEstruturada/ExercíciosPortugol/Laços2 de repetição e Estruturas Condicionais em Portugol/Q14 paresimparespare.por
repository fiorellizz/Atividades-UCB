programa {
  funcao inicio() {
    
    real numero, pares = 0, impares = 0, mediapar, mediageral, somanumeros = 0, somapares = 0, quantidadedenumero = 0, mediasopar

    faca 
    {
      escreva("Digite um número: ")
      leia(numero)
      quantidadedenumero++
      somanumeros = somanumeros + numero
      se(numero % 2 == 0){
        pares = pares + 1
        somapares = somapares + numero
      } senao {
        impares = impares + 1
      }
    } enquanto (numero != 0)
    quantidadedenumero = quantidadedenumero - 1
    pares = pares - 1 
    escreva("A quantidade de valores impares: ",impares,"")
    escreva("\nA quantidade de valores pares: ",pares,"")
    mediapar = (pares / quantidadedenumero) * 100
    escreva("\nA porcentagens de valores pares sobre todos os valores: ",mediapar,"%")
    mediageral = (somanumeros / quantidadedenumero)
    mediasopar = (somapares / pares)
    escreva("\nA média só dos valores pares: ",mediasopar,"")
    escreva("\nA média geral: ",mediageral,"") 
  }
}
