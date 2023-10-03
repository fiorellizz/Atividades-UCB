#include <stdio.h>

int main()
{

    float salariobruto, inss, irrf, salariofinal;

    printf("Digite seu salário bruto: ");
    scanf("%f", &salariobruto);

    if (salariobruto < 1320)
    {
        inss = salariobruto * 0.075;
    }
    else if (salariobruto > 1319.99 && salariobruto < 2571.29)
    {
        inss = ((salariobruto - 1319.99) * 0.09) + 99;
    }
    else if (salariobruto > 2571.28 && salariobruto < 3856.94)
    {
        inss = ((salariobruto - 2571.28) * 0.12) + 99 + 112.61;
    }
    else if (salariobruto > 3856.93 && salariobruto < 7507.49)
    {
        inss = ((salariobruto - 3856.93) * 0.14) + 99 + 112.61 + 154.28;
    }
    else
    {
        inss = ((7507.48 - 3856.93) * 0.14) + 99 + 112.61 + 154.28;
    }
    salariobruto = salariobruto - inss;

    if (salariobruto <= 2112.00)
    {
        irrf = 0;
    }
    else if (salariobruto >= 2112.01 && salariobruto <= 2826.65)
    {
        irrf = ((salariobruto - 2112.01) * 0.075);
    }
    else if (salariobruto >= 2826.66 && salariobruto <= 3751.05)
    {
        irrf = (((salariobruto - 2826.66) * 0.15) + 53.6);
    }
    else if (salariobruto >= 3751.06 && salariobruto <= 4664.68)
    {
        irrf = (((salariobruto - 3751.06) * 0.225) + 53.6 + 138.66);
    }
    else
    {
        irrf = (((salariobruto - 4664.68) * 0.275) + 53.6 + 138.66 + 205.57);
    }
    salariofinal = salariobruto - irrf;
    printf("Seu INSS foi: %.2f\nSeu IRRF foi: %.2f \nSeu salário com todos os impostos ficou em: %.2f", inss, irrf, salariofinal);

    return 0;
}