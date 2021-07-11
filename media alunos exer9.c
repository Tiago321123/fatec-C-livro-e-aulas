#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not1,not2, alun, reprov, aprov, exame;
    float media, media_classe, soma_media;
    reprov=0;
    aprov=0;
    exame=0;
    for(alun=1;alun<=2;alun++){
        printf("Primeira nota: ");
        scanf("%d%*c",&not1);
        printf("Segunda nota: ");
        scanf("%d%*c",&not2);
        media=(not1+not2)/2;
        soma_media= soma_media + media;
        printf("media= %.2f",media);
        if (media<3) {
            printf("\nReprovado\n");
            reprov++;
        }
        else {
          if(media>=3 && media<7) {
            printf("\nExame\n");
            exame++;
            }
            else {
                printf("\nAprovado\n");
                aprov++;
            }
            }
    }
    bin(234);
    media_classe=soma_media/6;
    printf("Total de alunos aprovados: %d\n",aprov);
    printf("Total de alunos de exame: %d\n",exame);
    printf("Total de alunos reprovados: %d\n",reprov);
    printf("A media da classe é: %.2f",media_classe);

    return 0;
}