#include <stdio.h>
int main(){
    float valor,soma=0,anos;
    int n;
    printf("Digite o valor para somar 10%% dele: ");
    scanf("%f%*c",&valor);
    printf("Digite a quantidade de anos: ");
    scanf("%f%*c",&anos);
    for(n=0;n<anos;n++){
    if(n==0){
    soma= valor*2;/* (valor*0.10)*vezes; */
    }
    else soma=soma*2;
    }
    printf("Valor: %.2f\n",soma);

    return 0;
}