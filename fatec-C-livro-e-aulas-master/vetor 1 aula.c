#include <stdio.h>

int main()
{
    /*char frase[100], abc[30];
    abc[30]='a';*/
    //printf("%s",abc);
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // sizeof retorna o tamanho da variavel
    for(int i=0; i < sizeof(frase); i++)
    {
    if(frase[i] == ' ')
    {
    frase[i] = '\n';
    }
    }
    printf("%s", frase);
    return 0;
}
//Peguei da aula passada