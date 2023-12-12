#include <stdio.h>
#include <string.h>

void abertura(){
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

void novoChute(char chutes[], int *tentativas){
    char chute;
    scanf(" %c", &chute);
    chutes[(*tentativas)] = chute;
    (*tentativas)++;
}

int jaFoiChutada(char letra, char chutes[26], int tentativas){

    int achou = 0;

    for (int j = 0; j < tentativas; j++){
        if (chutes[j] == letra){
            achou = 1;
            break;
        }
    }

    return achou;
}

void desenha(char secreta[20], char chutes[], int tentativas){
    for (int i = 0; i < strlen(secreta); i++){

            int achou = jaFoiChutada(secreta[i], chutes, tentativas);

            if (achou){
                printf("%c ", secreta[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");
}

void escolhePalavra(secreta[20]){
    sprintf(secreta, "MATEMATICA");
}

int main(){
    char secreta[20];

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    escolhePalavra(secreta);
    abertura();

    do{

        desenha(secreta, chutes, tentativas);

        novoChute(chutes, &tentativas);

    } while (!acertou && !enforcou);

    return 0;
}