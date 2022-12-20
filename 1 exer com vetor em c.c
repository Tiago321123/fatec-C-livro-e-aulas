#include <stdio.h>
int main()
{
    int numero[8], cont,i=0,a;
    for(cont=0;cont<=7;cont++){
        printf("Digite os números: ");
        scanf("%d%*c",&numero[cont]);
    }
        
    for(cont=0;cont<=7;cont++){
        for (a=0;a<=numero[cont];a++) {
            if (numero[cont] % a == 0){
                i++;
            
            printf("%d\n",numero[cont]);
            }
        }
        if (i==2){
            printf("O número %d é primo, sua posicao é %d",numero[cont],cont);
        }
    }
    return 0;
}