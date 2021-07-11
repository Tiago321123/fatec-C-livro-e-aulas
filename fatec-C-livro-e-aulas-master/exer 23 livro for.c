#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Portugues");
    int opc, mes_trab;
    float salario,conta;
    printf("Menu de opções:\n");
    printf("1. Novo salário\n");
    printf("2. Ferias\n");
    printf("3. Décimo terceiro\n");
    printf("4. Sair\n\n");

    // system("clear"); assim que limpa no linux
    do {
        printf("Digite a opção desejada. ");
        scanf("%d%*c",&opc);
        if(opc<1 || opc>4){
        printf("Opção invalida");
        }
        else {
        if(opc == 1){
            printf("Escreva seu salário: ");
            scanf("%f%*c",&salario);
            if(salario<=210){
                conta=salario + salario*0.15;
                printf("Novo salário: %.2f\n",conta);
            }
            if(salario>210 && salario<=600){
                conta=salario + salario*0.10;
                printf("Novo salário: %.2f\n",conta);
            }
            if(salario>600){
                conta=salario + salario*0.05;
                printf("Novo salário: %.2f\n",conta);
            }
        }
        if(opc == 2){
            printf("Escreva seu sálario: ");
            scanf("%f%*c",&salario);
            conta= salario+(salario/3);
            printf("O valor de suas férias: %.2f\n",conta);
        }
        if(opc == 3){
            printf("Escreva seu salário: ");
            scanf("%f%*c",&salario);
            printf("Digite a quantidade de meses que voçê trabalha nessa empresa (no máximo 12): ");
            scanf("%d%*c",&mes_trab);
            conta= (salario*mes_trab)/12;
            printf("Valor do seu décimo terceiro: %.2f\n",conta);
        }
        }
        }while(opc!=4);

    return 0;
}
