#include <stdio.h>

int main()
{

    int operario, num_op, num_maior, pecas, pecas2, salario=0, sexoM=0, sexoF=0;
    char sexo;
    float conta,maiorconta=0,mediaM=0,mediaF=0;

    for (operario=1;operario<=2;operario++) {
    printf("Digite o numero do operario: ");
    scanf("%d%*c",&num_op);
    printf("Digite seu sexo M para masculino ou F para feminino: ");
    scanf("%c%*c",&sexo);
         printf("Digite seu número de peças feitas: "); //parei aqui
         scanf("%d%*c",&pecas);
         
        if (pecas<=30) {
            salario=salario+1080;
            printf("Seu salario = 1080\n");
        }
        else {
            if (pecas>=31 && pecas<=50) {
                pecas2=pecas-30;
                conta= 1080 + pecas2*32.40;
                salario=salario+conta;
                printf("Seu salario = %f\n",conta);
                if (maiorconta<conta){
                    maiorconta=conta;
                }
            }
            else {
                pecas2=pecas-30;
                conta= 1080 + pecas2*54;
                salario=salario+conta;
                printf("Seu salario = %f\n",conta);
                 if (maiorconta<conta){
                    maiorconta=conta;
                }
            }
        }
        if(sexo=='M') {
            sexoM=sexoM+1;
            mediaM=mediaM +pecas;
        }
        else if(sexo=='F'){
        sexoF=sexoF +1;
        mediaF=mediaF + pecas;
        }
        if (operario==1){
            maiorconta=conta;
            num_maior= num_op;
        }
         if (operario>1 && maiorconta<conta){
                maiorconta=conta;
                num_maior=num_op;
        }
        printf("numero do operario: %d\n",num_op);
  }
    printf("O numero do operario(a) com maior salario é %d\n",num_maior);
    printf("Total da folha de pagamento: %d\n",salario);
    printf("total de pecas fabricadas no mes: %f\n",mediaF+mediaM);
    printf("maiorconta: %f\n",maiorconta);
    printf("pecas total F: %f\n",mediaF);
    printf("pecas total M: %f\n",mediaM);
    mediaM=mediaM/sexoM;
    mediaF=mediaF/sexoF;
    printf("media mulher: %f\n",mediaF);
    printf("media homem: %f\n",mediaM);
    printf("SEXO M: %d\n",sexoM);
    printf("SEXO F: %d",sexoF);
        return 0;
}
