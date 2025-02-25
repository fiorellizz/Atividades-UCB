programa {
  funcao inicio() {

    real nota1, nota2, nota3, media, mediaAprov, mediaEx, numAluno

    escreva("Digite seu numero: ")
    leia(numAluno)

    escreva("Digite sua media de exercicios: ")
    leia(mediaEx)

    escreva("Digite sua nota 1: ")
    leia(nota1)

    escreva("Digite sua nota 2: ")
    leia(nota2)

    escreva("Digite sua nota 3: ")
    leia(nota3)

    mediaAprov=(nota1+nota2*2 +nota3*3+ mediaEx)7

    se (mediaAprov >= 90) {
      escreva("APROVADO \n")
    }
     senao se (mediaAprov >= 75) {
      escreva("APROVADO \n")
    }
     senao se (mediaAprov >= 60) {
      escreva("APROVADO \n")
    }
     senao se(mediaAprov >= 40) {
      escreva("APROVADO \n")
    }
     senao se (mediaAprov < 90) {
      escreva("REPROVADO \n")
    }
     senao {

     }

       escreva("\n número do aluno: ", numAluno)
       escreva("\n notas: ", nota1, ", ", nota2, ", ", nota3)
       escreva("\n média dos exercícios: ", mediaEx)
       escreva("\n média de aproveitamento: ", mediaAprov)

  

    
  }
}
