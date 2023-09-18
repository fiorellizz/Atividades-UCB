programa {
  funcao inicio() {
    inteiro prato, sobremesa, bebida, cal = 0

    escreva("Escolha seu prato:\n 1 - Vegetariano \n 2 – Peixe \n 3 – Frango \n 4 – Carne \n")
    leia(prato)
    
    se(prato == 1){
      cal = (cal + 180)
    } senao se(prato == 2){
      cal = (cal + 230)
    } senao se(prato == 3){
      cal = (cal + 250)
    } senao se(prato == 4){
      cal = (cal + 350)
    } senao {
      escreva("As calorias do seu prato não serão somadas! \n")
    }

    escreva("Escolha sua sobremesa:\n 1 – Abacaxi \n 2 – Sorvete diet \n 3 – Mouse diet \n 4 – Mouse chocolate \n")
    leia(sobremesa)

    se(sobremesa == 1){
      cal = (cal + 75)
    } senao se(sobremesa == 2){
      cal = (cal + 110)
    } senao se(sobremesa == 3){
      cal = (cal + 170)
    } senao se(sobremesa == 4){
      cal = (cal + 200)
    } senao {
      escreva("As calorias da sua sobremesa não serão somadas! \n")
    }
    
    escreva("Escolha sua bebida:\n 1 – Chá \n 2 - Suco de laranja \n 3 – Suco de melão \n 4 – Refrigerante diet \n")
    leia(bebida)

    se(bebida == 1){
      cal = (cal + 20)
    } senao se(bebida == 2 ){
      cal = (cal + 70) 
    } senao se(bebida == 3){
      cal = (cal + 100)
    } senao se(bebida == 4){
      cal = (cal + 65)
    } senao {
      escreva("As calorias da sua bebida não serão somadas! \n")
    }
    escreva("Seu prato tem um total de ",cal," calorias")
  }
}
