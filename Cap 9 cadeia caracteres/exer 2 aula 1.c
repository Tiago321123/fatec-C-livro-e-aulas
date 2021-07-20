#include <stdio.h>
#include <string.h>
int main()
{
 /*   char frase[100];
    int a;
    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);
    for(a=0;a<sizeof(frase);a++){
       if(a>0){
       if ((frase[a-1]=='t') && (frase[a]=='r')){ // pra fazer com mais de duas letras, tem que adicionar o frase[a-2] ou frase[a+2] por exemplo
        printf("%c%c ",frase[a-1],frase[a]);
        printf("%d,%d\n",a-1,a);
        }
       }
     }


    return 0;
}*/
    char frase[100], pala[20];
    int posi,n=0,t=0;
    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);
    printf("Digite o que você quer achar: ");
    fgets(pala,sizeof(pala),stdin);
    for(n=0;n<sizeof(frase);n++){
        if(frase[n]==pala[t]) {
          posi=n;
          printf("posição: %d\n",posi);
        }
    }
    return 0;
}/*
    char frase[100];
    char car[4];
    char test[4];
    
    int position;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("\nDigite o que achar: ");
    fgets(car, sizeof(car), stdin);
    
    if(strstr(frase, car) != NULL)
    {
        printf("\nExiste");
    }
    else
    {
        printf("\nNão existe");
    }
    
    for(int i=0; i < strlen(frase); i++)
    {
        for(int x=0; x < strlen(car); x++)
        {
            test[x] = frase[i + x];
        }
        
        if(strcmp(test, car) == 0)
        {
            position = i;
        }
    }
    
    printf("\nNa posicao: %d", position);
    
    return 0;
}*/
