#include <stdio.h>
#include <string.h>
int main ()
{
    char nome[50], a;
    int i;
    printf("Digite seu nome: ");
    fgets (nome,sizeof(nome),stdin);
    for(i=0;i<sizeof(nome);i++){
    if(nome[i]==' ')
    {
    a= nome[i+1];
    printf("%c ",a);
    }
    if(i==0){
        a= nome[i];
        printf("%c ",a);
    }
    }
    return 0;
}
// Do professor:
#include <stdio.h>
int main()
{
 char nome[100];
char ini[100];
int x=0;
printf("Digite o nome Completo: ");
fgets(nome, sizeof(nome), stdin);
for(int i=0; i < strlen(nome); i++)//strlen retorna 14 de caractere armazenados
    {
    if((i == 0) && (nome[i]!=' '))
    {
    ini[x] = nome[i];
    x++;
    }
    else if(nome[i] == ' ')
    {
    if(nome[i+1]!=' '){
    ini[x] = nome[i + 1];
    x++;
    }
    }
    }
    printf("\nIniciais: %s", ini);
return 0;
}
