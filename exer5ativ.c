#include <stdio.h>
#include <math.h>


int main()
{
    float fim, i, j, x, num_termos, den, denominador, fat, s;
    int expoente;
    printf("Digite o numero de termos: ");
    scanf("%f%*c",&num_termos);
    printf("digite o valor de X: ");
    scanf("%f%*c",&x);
    s=0;
    denominador=1;
    for (i=1;i<=num_termos;i++){
        fim=denominador;
        fat=1;
        for (j=1;j<=fim;j++){
            fat=fat*j;
        }
        expoente= i+1;
        if (expoente%2==0){
            s=s- pow(x,expoente)/fat;
        }
        else{ 
            s= s+ pow(x,expoente)/fat;
        }
        if (denominador==4){
            den=-1;
        }
        if(denominador==1)
        den = 1; //fez aqui
    
        if (den == 1){
        denominador = denominador + 1; //denominador 4
        }
        else{
        denominador = denominador - 1;
        }
        }
        printf("Valor da soma: %f",s);
        unsigned char a = 255; 
        unsigned char b = 0xff;
        printf("%d",a); 
        printf("%d",b);
        printf("%x",a);
    return 0;
}