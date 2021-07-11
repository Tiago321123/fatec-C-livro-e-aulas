#include <stdio.h>

int main()
{
    int cont, cod, cid_maior, num_vei, nume_acid, maior, cid_menor, soma_acid, cont_acid, menor, soma_vei;
    float media_vei, media_acid;
    soma_vei=0;
    soma_acid=0;  // tem q falar q inicia sendo igual a zero, como ir no caixa de mercado
    cont_acid=0;

    for(cont=1;cont<=5;cont++) {
    printf("Digite o codigo da cidade: ");
    scanf("%d%*c",&cod);
    printf("Digite o numero de veiculos: ");
    scanf("%d%*c",&num_vei); 
    printf("Digite o numero de acidentes: ");
    scanf("%d%*c",&nume_acid); 
    
    if (cont==1) {  // No 1 nao tem ninguem pra comparar, é o meu parametro, recebe todos os valores
        cid_maior=cod;
        maior=nume_acid;
        cid_menor=cod;
        menor=nume_acid;
    }
    else {
        if (nume_acid>maior) { // aqui já começa a comparar, vai do 2 ao 5
        nume_acid=maior;
        cid_maior=cod;        
       }
        if (nume_acid<menor) { 
            menor=nume_acid;
            cid_menor=cod;
        }
    }   
  
    soma_vei= soma_vei + num_vei;
  
    if (num_vei<2000) { 
        soma_acid= soma_acid + nume_acid; // vai somando os acidentes das cidades com menos de 2000 acidentes,
        //la na frente tira a media
        cont_acid= cont_acid + 1;
    }
  }  
    printf("Cidade com codigo=%d com maior qtd de acidentes=%d\n",cid_maior,maior);
    printf("Cidade com codigo=%d com menor qtd de acidentes=%d\n",cid_menor,menor);
    media_vei=soma_vei/5;
    printf("Media de veiculos nas 5 cidades: %.2f\n",media_vei); 
    if (cont_acid==0) {
        printf("Nao foi digitada nenhuma cidade com menos de 2000 veiculos");
    }
    else {
        media_acid= soma_acid/cont_acid;
        printf("Media de acidentes: %.2f",media_acid);  
    }
        unsigned char a = 678; 
        unsigned char b = 0xff;
        printf("\n%d",a); 
        printf("\n%d",b);
        printf("\n%x",a);
        
   return 0;
}