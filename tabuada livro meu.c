#include <stdio.h>
int main()
/*
    int tabu;
    printf("Digite um número: ");
    scanf("%d%*c",&tabu);
    printf("%d x 0=0\n%d x 1=%d\n%d x 2=%d\n%d x 3=%d\n%d x 4=%d\n%d x 5=%d\n%d x 6=%d\n%d x 7=%d\n%d x 8=%d\n%d x 9=%d\n%d x 10=%d",tabu,tabu,tabu,tabu,tabu*2,tabu,tabu*3,
    tabu,tabu*4,tabu,tabu*5,tabu,tabu*6,tabu,tabu*7,tabu,tabu*8,tabu,tabu*9,tabu,tabu*10);


    return 0;
*/
{
    int tabu,mult=0,result;
    printf("Digite um número: ");
    scanf("%d%*c",&tabu);
    mult=0;
    while(mult<=10){
        result=tabu*mult;
        printf("%d x %d = %d\n",tabu,mult,result);
        mult++;
    }
    return 0;
}