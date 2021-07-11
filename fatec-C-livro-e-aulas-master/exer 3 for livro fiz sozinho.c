#include <stdio.h>
int main()
{
    int pes,ida,i30=0,i45=0,i60=0;
    float i15=0,i70=0;
    for(pes=1;pes<=8;pes++){
        printf("Digite sua idade: ");
        scanf("%d%*c",&ida);
        if(ida<=15){
            i15++;
        }
        if(ida>=16 && ida<=30){
            i30++;
        }
        if(ida>=31 && ida<=45){
            i45++;
        }
        if(ida>=46 && ida<=60){
            i60++;
        }
        if(ida>60){
            i70++;
        }
    }
    printf("\nQuantidade de pessoas com menos de 15 anos de idade: %f",i15);
    printf("\nQuantidade de pessoas entre 16 e 30 anos de idade: %d",i30);
    printf("\nQuantidade de pessoas entre 31 e 45 anos de idade: %d",i45);
    printf("\nQuantidade de pessoas entre 46 e 60 anos de idade: %d",i60);
    printf("\nQuantidade de pessoas com mais de 60 anos de idade: %f",i70);
    printf("\nPercentual de pessoas com menos de 15 anos: %f",i15*12.5);
    printf("\nPercentual de pessoas com mais de 60 anos: %f",i70*12.5);
    
    return 0;
}