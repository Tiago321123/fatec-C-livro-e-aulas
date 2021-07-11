#include <stdio.h>

 

int main()
{
    int continua=1;
    int saque, troco;
    int dois=2, cinco=5, dez=10, vinte=20, cinquenta=50, cem=100;
    printf("Digite o valor a ser sacado:");
    scanf("%d%*c",&saque);

    while(continua){
        cem = saque/100;//quociente 568
        troco = saque%100;//resto 68
        cinquenta = troco/50;//quociente 1
        troco = troco%50;//resto 18
        vinte = troco/20;//quociente 0
        troco = troco % 20;//resto 18
        dez = troco/10;//quociente 1
        troco = troco%10;//resto 8
        cinco = troco/5;//quociente 1
        troco = troco%5;//resto 3
        dois = troco/2;//quociente 2
        troco=troco%2;//resto 1
        printf("\nNotas de 100=%d",cem);
        printf("\nNotas de 50=%d",cinquenta);
        printf("\nNotas de 20=%d",vinte);
        printf("\nNotas de 10=%d",dez);
        printf("\nNotas de 5=%d",cinco);
        printf("\nNotas de 2=%d",dois);
        printf("\nNotas de 1=%d",troco);
        getchar();
        system("clear");// limpar é assim no linux
        printf("Digite o valor a ser sacado: (0 para sair)");
        scanf("%d%*c",&saque);
        if(saque>0){
           continua=1;
        }
        else{
            continua=0;
        }
    }

 


    return 0;
}