#include <stdio.h>
int main()
{
    float salario_in=2000;
    int ano_in, ano_fi=2021, x=0;
    for(ano_in=1955;ano_in<=ano_fi;ano_in++){
        if (ano_in>1995){
            x++;
            salario_in= salario_in + (1.5*x/100)*salario_in;
        }
        
    }
    printf("salario: %f",salario_in);
    return 0;
}