#include <stdio.h>
#include <string.h>

struct exemplo1
{
    char nome[50];
    int idade;
    float salario;
};
struct exemplo1 no, id, sa;


struct
{
    char nome[50];
    int idade;
    float salario;
} exemplo2, no2, id2, sa2;


typedef struct{
    char nome[50];
    int idade;
    float salario;
} exemplo3;
 exemplo3 no3, id3, sa3;


int main(){
    struct exemplo1;
    struct exemplo2;
    id.idade=20;
    sa.salario=2353;
    sa2.salario=4546;
    id2.idade=34;
    printf("%d\n",id.idade);
    printf("%.2f\n",sa.salario);
    printf("%d\n",id2.idade);
    printf("%.2f\n",sa2.salario);
    strcpy(no.nome,"Tiagão");
    printf("%s",no.nome);
return 0;
}
