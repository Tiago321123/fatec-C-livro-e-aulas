#include <stdio.h>
#include <locale.h>
int main()
{
    //Para a acentuação, usar chcp 65001 no terminal
    setlocale(LC_ALL,"Portugues");
    int item,cacho,tcacho=0,x_sala,tx_sala=0,x_bacon,tx_bacon=0,misto,tmisto=0,sala,tsala=0,agua,tagua=0,refri,trefri=0;
    int nu1,n1,q1,n2,q2,nu2;
    float total;
    printf("Item\tProduto\t\tCódigo\t\tPreço Unitário\n\n");
    printf("1\tCachorro-quente\t100\t\t5,00\n");
    printf("2\tX-salada\t101\t\t8,79\n");
    printf("3\tX-bacon\t\t102\t\t9,99\n");
    printf("4\tMisto\t\t103\t\t6,89\n");
    printf("5\tSalada\t\t104\t\t4,80\n");
    printf("6\tÁgua\t\t105\t\t3,49\n");
    printf("7\tRefrigerante\t106\t\t4,99\n");
    do{
        printf("Digite o item de seu produto: ");
        scanf("%d",&item);
        switch(item){
            case 1:
                printf("Digite quantos cachorro-quentes voçê quer: ");
                scanf("%d",&cacho);
                tcacho=tcacho + cacho;
                break;
            case 2:
                printf("Digite quantos X-salada voçê quer: ");
                scanf("%d",&x_sala);
                tx_sala=tx_sala + x_sala;
                break;
            case 3: 
                printf("Digite quantos X-bacon voçê quer: ");
                scanf("%d",&x_bacon);
                tx_bacon=tx_bacon + x_bacon;
                break;
            case 4:
                printf("Digite quantos mistos voçê quer: ");
                scanf("%d",&misto);
                tmisto=tmisto + misto;
                break;
            case 5:
                printf("Digite quantas saladas voçê quer: ");
                scanf("%d",&sala);
                tsala=tsala + sala;
                break;
            case 6: 
                printf("Digite quantas águas voçê quer: ");
                scanf("%d",&agua);
                tagua=tagua + agua;
                break;
            case 7:
                printf("Digite quantos refrigerantes voçê quer: ");
                scanf("%d",&refri);
                trefri=trefri + refri;
                break;
        }


    }while(item>=1 && item<=7);

    if (tcacho>=1){
        printf("%d cachorro-quente por %d reais\n",tcacho,tcacho*5);
        n1=1;
        q1=tcacho;
    }
    if (tx_sala>=1){
        printf("%d X-salada por %.2f reais\n",tx_sala,tx_sala*8.79);
        n2=2;
        q2=tx_sala;
    }
    if (tx_bacon>=1){
        printf("%d X-bacon por %.2f reais\n",tx_bacon,tx_bacon*9.99);
    }
    if (tmisto>=1){
        printf("%d misto por %.2f reais\n",tmisto, tmisto*6.89);
    }
    if (tsala>=1){
        printf("%d salada por %.2f reais\n",tsala,tsala*4.80);
    }
    if (tagua>=1){
        printf("%d água por %.2f reais\n",tagua,tagua*3.49);
    }
    if (trefri>=1){
        printf("%d refrigerante por %.2f reais\n",trefri, trefri*4.99);
    }

    total= (tcacho*5 + tx_sala*8.79 + tx_bacon*9.99 + tmisto*6.89 + tsala*4.80 + tagua*3.49 +trefri*4.99);
    printf("Total: %f",total);

    return 0;
} 