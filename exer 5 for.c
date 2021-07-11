#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1=0,r2=0,r5=0,r10=0,r20=0,r50=0,r100=0, saque=0;
    printf("Digite o valor de seu saque: ");
    scanf("%d",&saque);

    for(saque=saque;saque!=0;saque){
        
        {

        if(saque>=100)

        {

        saque=saque-100;

        r100++;

        }

        else if(saque>=50)

        {

        saque-=50;

        r50++;

        }

        else if(saque>=20)

        {

        saque-=20;

        r20++;

        }

        else if(saque>=10)

        {

        saque-=10;

        r10++;

        }

        else if(saque>=5)

        {

        saque-=5;

        r5++;

        }

        else if(saque>=2)

        {

        saque-=2;

        r2++;

        }

        else if(saque>=1)

        {

        saque-=1;

        r1++;

        }
    
      }
    }
    printf("\n %d nota(s) de 100 Reais.",r100);

    printf("\n %d nota(s) de 50 Reais.",r50);

    printf("\n %d nota(s) de 20 Reais.",r20);

    printf("\n %d nota(s) de 10 Reais.",r10);

    printf("\n %d nota(s) de 5 Reais.",r5);

    printf("\n %d nota(s) de 2 Reais.",r2);

    printf("\n %d nota(s) de 1 Reais.",r1);
    return 0;
}