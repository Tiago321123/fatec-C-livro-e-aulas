#include <stdio.h>
int main()
{
    float p,prec;
    int x=0;
    for(p=5;p<=6;p++) {
        if (p=5){
            prec=64*p -200;
            printf("\tPRECO:\t%f\n        %f",p,prec);
        }
        if (p<5){
            x=x+26;
            prec=64*p +x -200;
            printf("\t\t\tPRECO:\t\t%f\n\t\t\t\t\t\t\t%f",p,prec);
        }

    }



    return 0;
}