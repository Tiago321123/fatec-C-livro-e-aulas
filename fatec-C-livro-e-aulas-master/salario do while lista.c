#include <stdio.h>
int main()
{
    float salario_in=2000;
    int ano_in=1955, ano_fi=2021, x=0;
    do {
        if (ano_in>1995){
            x++;
            salario_in= salario_in + (1.5*x/100)*salario_in;
        }
        ano_in++;
    } while(ano_in<=ano_fi);
    printf("salario: %f",salario_in);
    return 0;
}