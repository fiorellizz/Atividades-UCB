programa {
  funcao inicio() {
    inteiro numero, intervaloUm, intervaloDois, intervaloTres, intervaloQuatro  

    intervaloUm=0
    intervaloDois=0
    intervaloTres=0
    intervaloQuatro=0


    faca {
      escreva("Digite um n�mero do grupo dos INTEIROS: \n")
      leia(numero)

      se(numero>=0 e numero<=25){
        intervaloUm= intervaloUm+1
      } senao se(numero>=26 e numero<=50){
        intervaloDois= intervaloDois+1
      } senao se(numero>=51 e numero<=75){
        intervaloTres= intervaloTres+1
      } senao se (numero>=76 e numero<=100){
        intervaloQuatro = intervaloQuatro+1
      } senao{
        
      }
    } enquanto(numero>0)

    escreva("Ops! Voc� digitou um n�mero negativo e isso encerra nosso programa!\n Ao total, voc� digitou:\n ", intervaloUm, " n�meros entre 0-25\n", 
    intervaloDois, " n�meros entre 26-50\n", intervaloTres, " n�meros entre 51-75\n", intervaloQuatro, " n�meros entre 76-100")
  }
}
