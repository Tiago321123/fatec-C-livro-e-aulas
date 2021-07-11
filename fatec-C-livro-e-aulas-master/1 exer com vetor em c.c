#include <stdio.h>
int main()
{
    int numero[8], cont,i=0;
    for(cont=0;cont<=7;cont++){
        printf("Digite os numeros: ");
        scanf("%d%*c",&numero[cont]);
    }
        
        for(cont=0;cont<=7;cont++){
        for (numero[cont]=0;numero[cont]<=8;cont++) {

        if (numero[cont] % cont == 0){
            i++;
        
        printf("%d\n",numero[cont]);
        } 

        if (i==2){
            printf("O numero %d é primo, sua posicao é %d",numero[cont],cont);
        }
        
        }
        }
    return 0;
}