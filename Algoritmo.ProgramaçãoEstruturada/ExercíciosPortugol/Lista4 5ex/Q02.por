programa {
  funcao inicio() {

    real valor, ano, taxa, imposto 

    escreva("O valor do carro: ")
    leia(valor)

    escreva("O ano do carro: ")
    leia(ano)

    se(ano<1990){
      taxa=0.01
      imposto= taxa*valor 
    }
    senao{
      taxa=0.015
      imposto=taxa*valor 
    }

  escreva("O imposto a ser pago será de: ", imposto)
  }
}
