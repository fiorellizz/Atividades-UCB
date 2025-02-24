programa {
  funcao inicio() {
    real lado1, lado2, lado3

    escreva("Digite um valor para o LADO 1: ")
    leia(lado1)

    escreva("Digite um valor para o LADO 2: ")
    leia(lado2)

    escreva("Digite um valor para o LADO 3: ")
    leia(lado3)

    

    se(lado1+lado2>lado3 e lado2+lado3>lado1 e lado1+lado3>lado2){
     se(lado1 == lado2 e lado1 == lado3){
        escreva("Isso é um Triângulo Equilátero!")
     }senao se(lado1==lado2 ou lado2==lado3 ou lado1==lado3){
        escreva("Isso é um Triângulo Isósceles!")
     } senao {
        escreva("Isso é um Triângulo Escaleno!")
     } 
    }senao{
      escreva("Isso não é um TRIÂNGULO!")
    }
    
  }
}
