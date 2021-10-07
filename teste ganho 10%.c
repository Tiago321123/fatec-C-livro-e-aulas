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
    soma= valor + valor*0.02;/* (valor*0.10)*vezes; */
    }
    else soma=soma + soma*0.02;
    }
    printf("Valor: %.2f\n",soma);

    return 0;
}