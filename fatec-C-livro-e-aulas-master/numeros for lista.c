/*1) Faça um programa que leia vários números, calcule e mostre:
(a) A soma dos números digitados
(b) A quantidade de números digitados
(c) A média dos números digitados float
(d) O maior número digitado ><
(e) O menor número digitado
(f) A média dos números pares float,pares*/
#include <stdio.h>

int main() 
{
    float soma=0,media,maior,menor,media_par=0, qtdmedia=0;
    int qtd_num,num,nmr;
    printf("Digite quantos números voce vai usar: ");
    scanf("%d%*c",&qtd_num);
    for(num=1;qtd_num>=num;num++){
        printf("Digite os números: ");
        scanf("%d",&nmr);
        if(num==1){
            soma= soma+nmr;
            maior=nmr;
            menor=nmr;
        }
        if (num>1){
            soma= soma+nmr;
            media=soma/qtd_num;
            if(maior<nmr){
                maior=nmr;
            }
            if(menor>nmr){
                menor=nmr;
            }
        }
        if (nmr % 2==0){
            qtdmedia++;
            media_par=media_par+nmr;
        }
    }
    printf("Soma: %.2f\n",soma);
    printf("Quantidade de numeros: %d\n",qtd_num);
    printf("Media: %.2f\n",media);
    printf("Maior numero: %.2f\n",maior);
    printf("Menor numero: %.2f\n",menor);
    media_par=media_par/qtdmedia;
    printf("Media numeros pares: %.2f\n",media_par);
    return 0;

}
