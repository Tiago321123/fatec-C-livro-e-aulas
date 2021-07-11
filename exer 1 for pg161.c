#include <stdio.h>

int main()
{
    int grupo, a, b, c, d;
    for(grupo=1;grupo<=5;grupo++){
        printf("Digite os valores de A,B,C e D do grupo: ");
        scanf("%d %d %d %d",&a,&b,&c,&d);

         if(a>b && b>c && c>d){
            printf("Ordem crescente: %d %d %d %d\n",d,c,b,a);
            printf("Ordem decrescente: %d %d %d %d\n",a,b,c,d);
        }
         if(a>b && b>d && d>c){ 
            printf("Ordem crescente: %d %d %d %d\n",c,d,b,a);
            printf("Ordem decrescente: %d %d %d %d\n",a,b,d,c);
        }
         if(a>d && d>b && b>c){
            printf("Ordem crescente: %d %d %d %d\n",c,b,d,a);
            printf("Ordem decrescente: %d %d %d %d\n",a,d,b,c);
        }
         if(a>c && c>b && b>d){
            printf("Ordem crescente: %d %d %d %d\n",d,b,c,a);
            printf("Ordem decrescente: %d %d %d %d\n",a,c,b,d);
        }
         if(a>c && c>d && d>b){
            printf("Ordem crescente: %d %d %d %d\n",d,b,c,a);
            printf("Ordem decrescente: %d %d %d %d\n",a,c,b,d);
        }
         if(a>d && d>c && c>b){
            printf("Ordem crescente: %d %d %d %d\n",b,c,d,a);
            printf("Ordem decrescente: %d %d %d %d\n",a,d,c,b);
        }
         if(b>a && a>c && c>d){
            printf("Ordem crescente: %d %d %d %d\n",d,c,a,b);
            printf("Ordem decrescente: %d %d %d %d\n",b,a,c,d);
        }
         if(b>c && c>a && a>d){
            printf("Ordem crescente: %d %d %d %d\n",d,a,c,b);
            printf("Ordem decrescente: %d %d %d %d\n",b,c,a,d);
        }
         if(b>c && c>d && d>a){
            printf("Ordem crescente: %d %d %d %d\n",a,d,c,b);
            printf("Ordem decrescente: %d %d %d %d\n",b,c,d,a);
        }
         if(b>a && a>d && d>c){ 
            printf("Ordem crescente: %d %d %d %d\n",c,d,a,b);
            printf("Ordem decrescente: %d %d %d %d\n",b,a,d,c);
        }
         if(b>d && d>a && a>c){ 
            printf("Ordem crescente: %d %d %d %d\n",c,a,d,b);
            printf("Ordem decrescente: %d %d %d %d\n",b,d,a,c);
        }
         if(b>d && d>c && c>a){ 
            printf("Ordem crescente: %d %d %d %d\n",a,c,d,b);
            printf("Ordem decrescente: %d %d %d %d\n",b,d,c,a);
        }
          if(d>a && a>b && b>c){
            printf("Ordem crescente: %d %d %d %d\n",c,b,a,d);
            printf("Ordem decrescente: %d %d %d %d\n",d,a,b,c);
        }
          if(d>b && b>a && a>c){
            printf("Ordem crescente: %d %d %d %d\n",c,a,b,d);
            printf("Ordem decrescente: %d %d %d %d\n",d,b,a,c);
        }
          if(d>b && b>c && c>a){
            printf("Ordem crescente: %d %d %d %d\n",a,c,b,d);
            printf("Ordem decrescente: %d %d %d %d\n",d,b,c,a);
        }
          if(c>a && a>b && b>d){
            printf("Ordem crescente: %d %d %d %d\n",d,b,a,c);
            printf("Ordem decrescente: %d %d %d %d\n",c,a,b,d);
        }
          if(c>b && b>a && a>d){
            printf("Ordem crescente: %d %d %d %d\n",d,a,b,c);
            printf("Ordem decrescente: %d %d %d %d\n",c,b,a,d);
        }
          if(c>b && b>d && d>a){
            printf("Ordem crescente: %d %d %d %d\n",a,d,b,c);
            printf("Ordem decrescente: %d %d %d %d\n",c,b,d,a);
        }
          if(c>a && a>d && d>b){
            printf("Ordem crescente: %d %d %d %d\n",b,d,a,c);
            printf("Ordem decrescente: %d %d %d %d\n",c,a,d,b);
        }
          if(c>d && d>a && a>b){
            printf("Ordem crescente: %d %d %d %d\n",b,a,d,c);
            printf("Ordem decrescente: %d %d %d %d\n",c,d,a,d);
        }
          if(c>d && d>b && b>a){
            printf("Ordem crescente: %d %d %d %d\n",a,b,d,c);
            printf("Ordem decrescente: %d %d %d %d\n",c,d,b,a);
        }
          if(d>a && a>c && c>b){
            printf("Ordem crescente: %d %d %d %d\n",b,c,a,d);
            printf("Ordem decrescente: %d %d %d %d\n",d,a,c,b);
        }
          if(d>c && c>a && a>b){
            printf("Ordem crescente: %d %d %d %d\n",b,a,c,d);
            printf("Ordem decrescente: %d %d %d %d\n",d,c,a,b);
        }
           if(d>c && c>b && b>a){
            printf("Ordem crescente: %d %d %d %d\n",a,b,c,d);
            printf("Ordem decrescente: %d %d %d %d\n",d,c,b,a);
        }
    }
    

    return 0;
}