programa {
  funcao inicio() {
    real = custo, destribuidor, impostos, final
    
    escreva ("Qual valor de custo do carro: ")
    leia(custo)
    destribuidor = 0.28
    impostos = 0.45
    
    final = (custo*impostos)+custo
    custo = (final*destribuidor)+final
    escreva("O valor final do carro será de: ",custo," reais.")
  }
}
