#include <stdio.h>

int main()
{
    int n,i,j,fat;
    long double e;
    printf("Digite o valor de N:");
    scanf("%d%*c",&n);
    e = 1;
    for (i=1;i<=n;i++){
    fat = 1;
    for(j=1;j<=i;j++){
    fat = fat * j;
    }
    e = (e + (long double)1/fat);//casting
    }

    printf("Valor de e:   %lf",e);

    return 0;
}
