#include <stdio.h>
#include <string.h>
int main ()
{
    //char abc[]={'d','s','p','\0'}; ou faz assim ou desse jeito seguinte
    char abc[]="ab\\6c"; // esse \\6 vai aparecer como \6
    char yuo[7], tea[7]="ertjk",cadeia1[7]={'akn'}, cadeia2[7]={'b98hm'};
    int resultado;
    printf("%s\n",abc);
    //fgets (tea);
    strcpy(yuo,"vai la"); //ou strcpy(yuo,tea); yuo copia o que está em tea.
    printf("%s\n",yuo);
    //A função fgets armazena na variável vet todos os símbolos digitados até a ocorrência do ENTER.
    // o scanf vai até aparecer um espaço em branco, depois não guarda se colocar mais
    //strncpy(str1, str2, n); A função strncpy copia os n primeiros caracteres da cadeia str2 para a cadeia str1, substituindo os do str1.
    //printf("%s\n",strcat(yuo,tea)); //A função strcat concatena(junta) tea à yuo. 
    // strncpy(yuo,tea,4);
    // printf("%s\n",yuo);
    strncat(yuo,tea, 2); // A função strncat concatena os n primeiros caracteres da cadeia2 à cadeia1.
    printf("%s\n",yuo);

    //resultado = strcmp(cadeia1, cadeia2);// compara se sao iguais ou qual é menor e maior
    /*A função strcmp compara duas cadeias de caracteres e retorna um número inteiro, que poderá ser:
    zero se as duas cadeias forem iguais;
    um número menor que zero se a cadeia1 for alfabeticamente menor que a cadeia2;
    um número maior que zero se a cadeia1 for alfabeticamente maior que a cadeia2.
    Essa função considera letras maiúsculas símbolos diferentes de letras minúsculas.*/
   // resultado = stricmp(cadeia1, cadeia2);// ou strcmpi
    // a diferença é q consideram letras maiúsculas e minúsculas símbolos iguais e não fazem parte do padrão ANSI.
   // printf("%d\n", resultado);
    resultado= strlen(cadeia2); // retornar o número de caracteres da cadeia2.
    printf("%d", resultado);
    

    resultado= strchr(cadeia2,'b'); // retorna um ponteiro com a posição da cadeia2 em que 'b' é encontrado pela PRIMEIRA vez.
    // se não for encontrado, resultado receberá "null".
    resultado= strrchr(cadeia2,'h'); // a diferença é que retornará a ÚLTIMA vez que 'h' aparece
    




    return 0;
}