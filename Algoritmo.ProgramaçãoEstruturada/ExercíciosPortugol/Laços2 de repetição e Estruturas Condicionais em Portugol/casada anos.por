programa {
  funcao inicio() {
    cadeia nome, sexo, estado
    inteiro anoscasada
    
    escreva("Qual seu nome: ")
    leia(nome)
    escreva("Qual seu sexo: \nM=MASCULINO\nF=FEMININO\n")
    leia(sexo)
    escreva("Qual seu estado civil: \nCASADA(o)\nSOLTEIRO\n")
    leia(estado)

    se (sexo == "F" e estado== "CASADA"){
      escreva("Quantos anos de casada você tem: ")
      leia(anoscasada)
    }
  }
}
