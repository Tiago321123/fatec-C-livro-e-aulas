#include <stdio.h>

int main()
{
    int cont, num1, num2, res;
    num1=0;
    num2=1;
    cont=0;
    printf("%d ",num1);
    printf("%d ",num2);

    for(cont=3;cont<=8;cont++){
        res= num1 + num2;
        printf("%d ",res);
        num1=num2;
        num2=res;
    }
       unsigned char a = 1111; 

        printf("%x",a);
    return 0;
}