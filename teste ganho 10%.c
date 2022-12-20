#include <stdio.h>
int main(){
    float valor,soma=0,anos;
    int n;
    printf("Digite o valor para somar 13%% dele: ");
    scanf("%f%*c",&valor);
    printf("Digite a quantidade de anos: "); // ano tem 12 meses
    scanf("%f%*c",&anos);

    for(n=0;n<=anos;n++){
        if(n==0){
        soma= valor + valor*0.012;/* (valor*0.10)*vezes; */
        }
        else soma=soma + soma*0.012 + 150;
    }
    printf("Valor: %.2f\n",soma);
    printf("Valorizacao: %f",(soma/valor)*100);

    return 0;
}