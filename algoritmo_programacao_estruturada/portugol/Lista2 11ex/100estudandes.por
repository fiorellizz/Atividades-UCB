programa {
  funcao inicio() {
    cadeia nome
    real nota1, nota2, nota3, media
    inteiro aprovados = 0, reprovados = 0

    para(inteiro cont = 1; cont <= 100; cont++)
    {
      escreva("\nDigite o nome do ",cont, "° aluno: ")
      leia(nome)
      escreva("Digite as 3 notas do aluno: \n")
      leia(nota1, nota2, nota3)
      media = (nota1 + nota2 + nota3) / 3
      se(media >= 5){
        escreva("O aluno ",nome, " foi APROVADO e sua média ficou = ",media, "!")
        aprovados = aprovados + 1
      } 
      senao se(media < 5){
        escreva("O aluno ",nome, " foi REPROVADO e sua média ficou = ",media, "!")
        reprovados = reprovados + 1 
      } senao {
        //nao precisa
      }
    }
    escreva("\n",aprovados," alunos foram APROVADOS!")
    escreva("\n",reprovados," alunos foram REPROVADOS!")
  }
}
