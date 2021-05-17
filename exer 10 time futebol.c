#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont_time, cont_jog, idade, peso, alt, qtde, tot80;
    float media_altura, media_idade, porcen, soma_altura, soma_idade;
    qtde=0;
    tot80=0;
    for(cont_time=1;cont_time<=2;cont_time++){
        soma_idade=0;
        for(cont_jog=1;cont_jog<=5;cont_time++){
            printf("Digite o peso em Kg: ");
            scanf("%d%*c",&peso);

            printf("Digite a altura em cm: ");
            scanf("%d%*c",&alt);
                
            printf("Digite a idade: ");
            scanf("%d%*c",&idade);
            if(idade<18){
                qtde++;
            }
            soma_idade= soma_idade + idade;
            soma_altura=soma_altura + alt;
            if (peso>80){
                tot80++;
            }
        
        }
       media_idade=soma_idade/(cont_jog-1);
       printf("\nA media da idades= %.2f",media_idade);
       printf("\n\nPressine enter para continuar...");
       system("cls");
    }
    printf("\nQuantidade com menos de 18 anos: %d",qtde);
    media_altura=soma_altura/(cont_time-1*cont_jog-1);
    printf("\nA media da altura dos jogadores= %f",media_altura);
    porcen= tot80/100;
    printf("\nPorcentagem dos jogadores com mais de 80 Kg: %f",porcen);
    return 0;
}




