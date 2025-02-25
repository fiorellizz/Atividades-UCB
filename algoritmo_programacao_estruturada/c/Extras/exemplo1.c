#include <stdio.h>

int main()
{

    char texto1[99], texto2[99];
    int cont1 = 0, cont2 = 0, igual = 0;

    printf("Digite o primeiro texto: ");
    gets(texto1);
    printf("Digite o segundo texto: ");
    gets(texto2);

    for (int i = 0; texto1[i] != '\0'; i++)
    {
        cont1++;
    }

    for (int j = 0; texto2[j] != '\0'; j++)
    {
        cont2++;
    }

    for (int i = 0; i < 99; i++)
    {
        if (texto1[i] == texto2[i] && texto1[i] != '\0' && texto2[i] != '\0')
        {
            igual++;
        }
    }

    printf("A primeira palavra %s tem %d caracteres.\n", texto1, cont1);
    printf("A segunda palavra %s tem %d caracteres.\n", texto2, cont2);
    if (igual > 0 && igual == cont1 && igual == cont2)
    {
        printf("Nome igual!");
    }
    else
    {
        printf("Nome Diferente!");
    }

    return 0;
}