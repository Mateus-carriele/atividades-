1)
#include <stdio.h>
#include <stdlib.h>

int main( ) {
   int a;
   float b;
   char c;
   double d;
   printf("int = %li\nfloat = %li\nchar = %li\ndouble = %li\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

    
	return 0;
}
2)
#include <stdio.h>
#include <stdlib.h>
void Media(float a){
    if (a>=7){
        printf("Aprovado\n");
    }else
    {
        printf("Reprovado\n");
    }
}
int main( ) {
   float *media = (float*)malloc(sizeof(float));
   printf("qual a sua media ?\n");
   scanf("%f", media);
   Media(*media);
  
	return 0;
}
3)
#include <stdio.h>
#include <stdlib.h>


int main( ) {
   float *salario = (float*)malloc(sizeof(float));
   float *vendas = (float*)malloc(sizeof(float));
   float *comissao = (float*)malloc(sizeof(float));
   printf("quando voce vendeu ?");
   scanf("%f",vendas);
   printf("qual o seu salario ?");
   scanf("%f",salario);
   *comissao = *vendas*0.15;
   printf("TOTAL = R$%.2f\n",*comissao + *salario );
  
   
	return 0;
}
4)
#include <stdio.h>
#include <stdlib.h>
struct media
{
    float n1,n2,n3;
};


int main( ) {
   struct media *aluno1 = (media*) malloc(3*sizeof(media));
   aluno1->n1 = 5.0;

   aluno1->n2 = 6.0;

   aluno1->n3 = 7.0;

   printf("MEDIA = %.2f",((aluno1->n1 + aluno1->n2 + aluno1->n3)/3));

      
	return 0;
}
5)
#include <stdio.h>
#include <stdlib.h>

float *nota = (float*) malloc(3 * sizeof(float));

int prox = 0;
void inserir(){
    printf("digide a nota 1\n");
    scanf("%f", &nota[0 + prox]);
    prox++;
}
void media(){
     float media = (nota[0]+nota[1]+nota[2])/prox;
     printf("Media = %.2f \n", media);

}
int main( ) {
   int op = 1;
   while (op!=0)
   {
        printf("1 - Adicionar notas\n");
        printf("2 - Calcular Media\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao\n");
        scanf("%d",&op);
    switch (op)
   {
    case 1:
      inserir();
      break;
    case 2:
      media();
      break;
    case 3:
      op = 0;
      break;
   
    default:
      printf("Digite um numero valido\n");
      break;
   }
   }
   
	return 0;
}
