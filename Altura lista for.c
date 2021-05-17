#include <stdio.h>
int main()
{
    float altz,altc=150,anos;
    for (altz=110;altz<=altc;altz+3){
        anos++;
        altz=altz +3;
        altc= altc+2;
    }
    printf("%.2f\n",anos);
    printf("%.2f metros\n",altz/100);
    printf("%.2f metros",altc/100);
    return 0;
}