#include <stdio.h>

int main()
{
    int nm1,i,qtd;
    printf("Digite um número inteiro maior que 1: ");
    scanf("%d%*c",&nm1);
    qtd=0;
    if (nm1<=1){
        printf("Apenas maior que 1: ");
    }
    else {
        for (i=1;i<=nm1;i++) { // FOR NAO TEM ;;;;;;
            if (nm1 % i==0)/*assim que tira o resto!!!*/ {
                qtd++;
            }
        }
        if (qtd==2) {
            printf("É um numero primo");
        }
        else 
        printf("Nao é numero primo");
    }
    return 0;
}