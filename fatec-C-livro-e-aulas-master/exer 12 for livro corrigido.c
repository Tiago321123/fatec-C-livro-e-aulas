#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int cont,num_op,pecas_op,cont_M,cont_F,pecastotal,num_maior;
    char sexo_op, oi[5]="abcd";
    float salario_maior,salario_op,tot_folha,media_M,media_F;
    tot_folha=0;
    pecastotal=0;
    media_M=0;
    media_F=0; 
    cont_F=0;
    cont_M=0;
    printf("ab: %d\n",strrev(oi));
    for (cont=1;cont<=15;cont++) {
        printf("Digite o numero do operario: ");
        scanf("%d%*c",&num_op);
        printf("Digite o sexo do operario (M ou F): ");
        scanf("%c%*c",&sexo_op);
        printf("Digite o numero de pecas feitas pelo %d operario: ",cont);
        scanf("%d%*c",&pecas_op);
        if (pecas_op>=1 && pecas_op<=30){
            salario_op=1080;
        }
        if (pecas_op>30 && pecas_op<=50){
            salario_op=1080 + (0.03*1080)*(pecas_op-30);
        }
         else {
            salario_op=1080 + (0.05*1080)*(pecas_op-30);
        }
        printf("O operario de numero %d recebe salario= %f\n",num_op,salario_op);
        tot_folha=tot_folha + salario_op;
        pecastotal=pecastotal + pecas_op;
        if (sexo_op=='M'){
            cont_M= cont_M +1;
            media_M= media_M + pecas_op;
        }
        if (sexo_op=='F'){
            cont_F= cont_F +1;
            media_F= media_F + pecas_op;
        }
        if (cont==1){
            salario_maior=salario_op;
            num_maior= num_op;
        }
        else if (salario_maior<salario_op){
                salario_maior=salario_op;
                num_maior=num_op;
        }
    }
        printf("Total da folha de pagamento: %f\n",tot_folha);
        printf("total de pecas fabricadas no mes: %d\n",pecastotal);
        if (cont_M==0){
            printf("Nao ha homens na fabrica\n");
        }
        else {
            media_M=media_M/cont_M;
            printf("Media de pecas fabricadas por homens: %.2f\n",media_M);
        }
        if (cont_F==0){
            printf("Nao ha mulheres na fabrica\n");
        }
        else {
            media_F=media_F/cont_F;
            printf("Media de pecas fabricadas por mulheres: %.2f\n",media_F);
        }
        printf("O numero do operario(a) com maior salario é %d\n",num_maior);

    return 0;
}
