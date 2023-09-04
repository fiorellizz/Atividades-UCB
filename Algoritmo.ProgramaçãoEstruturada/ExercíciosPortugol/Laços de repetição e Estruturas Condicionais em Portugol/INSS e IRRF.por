programa {
  funcao inicio() {
    real salariobruto, inss, irrf, salariofinal

    escreva("Digite seu salário bruto: ")
    leia(salariobruto)

    se(salariobruto < 1320){
      inss = salariobruto * 0.075
    } senao se(salariobruto > 1319.99 e salariobruto < 2571.29){
      inss = ((salariobruto - 1319.99) * 0.09) + 99
    } senao se(salariobruto > 2571.28 e salariobruto < 3856.94){
      inss = ((salariobruto - 2571.28) * 0.12) + 99 + 112.61
    } senao se(salariobruto > 3856.93 e salariobruto < 7507.49){
      inss = ((salariobruto - 3856.93) * 0.14) + 99 + 112.61 + 154.28
    } senao se(salariobruto > 7507.48) {
      inss = ((7507.48 - 3856.93)* 0.14) + 99 + 112.61 + 154.28
    } senao{
      //nda
    }
    salariobruto = salariobruto - inss

    se(salariobruto <= 2112.00){
      irrf = 0
    } senao se(salariobruto >= 2112.01 e salariobruto <= 2826.65){
      irrf = ((salariobruto - 2112.01) * 0.075)
    } senao se(salariobruto >= 2826.66 e salariobruto <= 3751.05){
      irrf = (((salariobruto - 2826.66) * 0.15) + 53.6)
    } senao se(salariobruto >= 3751.06 e salariobruto <= 4664.68){
      irrf = (((salariobruto - 3751.06) * 0.225) + 53.6 + 138.66)
    } senao se(salariobruto > 4664.68){
      irrf = (((salariobruto - 4664.68) * 0.275) + 53.6 + 138.66 + 205.57)
    } senao{
      //nda
    } 
    salariofinal = salariobruto - irrf
    escreva("Seu INSS foi: ",inss, "\nSeu IRRF foi: ",irrf,"\nSeu salário com todos os impostos ficou em: ",salariofinal,"!")
  }
}
