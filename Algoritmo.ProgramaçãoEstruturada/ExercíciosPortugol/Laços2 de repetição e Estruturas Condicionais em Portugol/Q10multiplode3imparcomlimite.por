programa {
  funcao inicio() {
    inteiro numero = 0, limite = 500, soma = 0, par = 0
    faca{
      se (numero % 2 == 0){
        par = par + numero
      } senao{
        soma = soma + numero
        escreva("\nPróximo multiplo e impar: ",numero,"")
      }
      numero = numero + 3
    }
    enquanto(numero <= limite)
    escreva("\nA soma de todos os multiplos de 3 no invervalo de 0 a ",limite," é ",soma,"!")
  }
}
