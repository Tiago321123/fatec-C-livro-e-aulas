#include <stdio.h>

int main()
{
    int alt,comp,larg,cmdi,capto, autonomia;
    printf("Informe a altura,comprimento e largura do reservatório em centímetros: \n");
    scanf("%d%d%d",&alt,&comp,&larg);
    printf("E o consumo médio diário em litros: \n");
    scanf("%d%*c",&cmdi);
    capto=((alt*comp*larg)/1000);
    printf("A capacidade do reservatório é: %d litros\n",capto);
    autonomia=capto/cmdi; 
    printf("a autonomia é de %d dias\n",autonomia);

    if(autonomia<=2){
        printf("Consumo elevado");
    }
    else {
        if (2<=autonomia && autonomia<7) {
        printf("Consumo moderado");
        }
      else printf("Consumo reduzido");
       /* %d%*c retira o enter */
    }

    // programa de media aritmetica
    float a,b,c,d, media;
    printf("\n\t\t\tCalculo de Medias\n\n");
    printf("\n\tDigite a nota da prova 1:");
    scanf("%f%*c",&a);
    printf("\n\tDigite a nota da prova 2:");
    scanf("%f%*c",&b);
    printf("\n\tDigite a nota da prova 3:");
    scanf("%f%*c",&c);
    printf("\n\tDigite a nota da prova 4:");
    scanf("%f%*c",&d);
    media = (a+b+c+d)/4;
    if (media>=7){
    printf("Aprovado com media= %.2f",media);
    }
    else{
    printf("Reprovado com media= %.2f",media);
     }   
    
    return 0;
}