#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salar;
    int opcao;
    printf("Menu de opcoes:\n");
    printf("1. Imposto\n");
    printf("2. Novo salario\n");
    printf("3. Classificacao\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d%*c",&opcao);

    switch (opcao) {
        case 1: printf("Seu salario: ");
                scanf("%f%*c",&salar);
                if (salar<500) {
                    printf("Imposto: %.2f",(salar*0.05));
                }
                if(salar>500 && salar<850){
                    printf("Imposto: %.2f",(salar*0.1));
                }
                if (salar>850) {
                    printf("Imposto: %.2f",(salar*0.15));
                }
        case 2: printf("Seu salario:");
                scanf("%f%*c",&salar);
                if (salar>1500) {
                    printf("Novo salario: %f",salar+25);
                 }
                if (salar>=750 && salar<=1500) {
                    printf("Novo salario: %f",salar+50);
                } 
                if (salar>=450 && salar<750){
                    printf("Novo salario: %f",salar+75);
                }
                if(salar<450){
                    printf("Novo salario: %f",salar+100);
                }
        case 3: printf("Seu salario: ");
                scanf("%f%*c",&salar);
                if(salar<=700){
                    printf("Mal renumerado\n");
                }
                if(salar>700){
                    printf("Bem renumerado\n");
                }
    }

    return 0;

}