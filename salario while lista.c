#include <stdio.h>
int main()
{
    float salario_in=2000;
    int ano_in=1955, ano_fi=2021, x=0;
    while(ano_in<=ano_fi){
        if (ano_in>1995){
            x++;
            salario_in= salario_in + (1.5*x/100)*salario_in;
        }
        ano_in++;
    }
    printf("salario: %f",salario_in);
    return 0;
}
int ano_in, ano_fi, x;
float salario_in;
 do {
    printf("Digite o ano incial: ");
    scanf("%d%*c",&ano_in);
    printf("Quanto voce ganhava nesse ano: ");
    scanf("%d%*c",&salario_in); 
    printf("Em quantos porc")
}