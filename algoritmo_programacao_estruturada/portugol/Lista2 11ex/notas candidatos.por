programa {
  funcao inicio() {
    cadeia n1, n2, n3
    inteiro nota1, nota2, nota3

    escreva("Digite o nome do candidato 1 e sua nota: \n")
    leia(n1, nota1)
    escreva("Digite o nome do candidato 2 e sua nota: \n")
    leia(n2, nota2)
    escreva("Digite o nome do candidato 3 e sua nota: \n")
    leia(n3, nota3)

    se(nota1 > nota2 e nota1 > nota3)
    {
      escreva("O candidato ",n1," foi o campeão, sua nota ficou " ,nota1, "!")
    } senao se(nota2 > nota1 e nota2 > nota3)
    {
      escreva("O candidato ",n2," foi o campeão, sua nota ficou " ,nota2, "!")
    } senao 
    {
      escreva("O canditado ",n3," foi o campeão, sua nota ficou " ,nota3, "!")
    }
  }
}
