1)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int a, b;
 printf("digide um numero: ");
 scanf("%i", &a);
 printf("digide um numero: ");
 scanf("%i", &b);
 if(a>b){
	printf("Maior = %i",a);
 }else{
	printf("Maior = %i",b);
 }
	return 0;
}
2)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 float a;
 printf("digide a sua media: ");
 scanf("%f", &a);
 if(a>=0 && a < 4 ){
	printf("Reprovado");
 }else if (a>=4 && a<7){
	printf("Prova Final");
 }else(a>=7 && a<=10);{
	printf("Aprovado");
 }
	return 0;
}
3)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 int a;
 printf("digide o seu numero: ");
 scanf("%i", &a);
 if(a % 2 == 0 ){
	printf("Par");
 }else{
	printf("impar");
 }

	
	return 0;
}
4)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int a,c, d, num, num1, num2, num3; 
printf("Menu\n");
printf("1-Soma\n");
printf("2-Quadrado\n");
printf("Digite a opcao desejada: ");
scanf("%i",&a);
switch (a){
	 case 1:
		 printf("digide um numero\n");
	     scanf("%i",&num);
	     printf("digide um numero\n");
	     scanf("%i",&num1);
		 c = num + num1;
		 printf("sama = %i",c);
		 break;
	 case 2:
	     printf("digide o numero da base\n");
	     scanf("%i",&num2);
	     printf("digide um numero\n");
	     scanf("%i",&num3);
	     d = pow(num2,num3);
		 printf("quadrado = %i",d);
		 break;     
	 default:
	     printf("Opcao Invalida");
		 break;
	}
	
	return 0;
}
5)
#include <stdio.h>
#include <math.h>

int main() {
 float a, b, c, delta, x1, x2;
 
    printf("f(x) = ax² + bx + c\n\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);
	delta = b*b - 4 * a * c;
	if (delta > 0){
		printf("2 Raize(s)");
	}else if (delta = 0){
		printf("1 Raize(s)");
	}else if (delta < 0){
		printf("0 Raize(s)");
	}
  return(0);
}
6)
#include <stdio.h>
#include <math.h>

int main() 
{
 int a;
 float b, c, d;
 printf("digide o seu codigo: ");
 scanf("%i", &a);
 printf("qual o seu salario: ");
 scanf("%f", &b);
 switch (a){
	 case 0:
		 printf("Funcao: Tecnico\n");
		 c = b + (b*0.05);
		 d = (b*0.05);
		 printf("Salario: %.2f\n",b);
		 printf("Gratificacao: %.2f\n",d);
		 printf("Total: %.2f\n",c);
		 break;
	 case 1:
	     printf("Funcao: Analista\n");
		 c = b + (b*0.10);
		 d = (b*0.10);
		 printf("Salario: %.2f\n",b);
		 printf("Gratificacao: %.2f\n",d);
		 printf("Total: %.2f\n",c);
		 break;  
	 case 2:
	     printf("Funcao: Gerente\n");
		 c = b + (b*0.20);
		 d = (b*0.20);
		 printf("Salario: %.2f\n",b);
		 printf("Gratificacao: %.2f\n",d);
		 printf("Total: %.2f\n",c);
		 break;   
	 default:
	     printf("codigo invalido");
		 break;
    }
 return(0);
}
7)
#include <stdio.h>
#include <math.h>

int main() 
{
 int a, b;
 float c; 
 printf("digide o seu codigo: ");
 scanf("%i", &a);
 printf("quantidade de item: ");
 scanf("%i", &b);
 switch (a){
	 case 1:
	     c = b * 4;
		 printf("Todal: R$%.2f ",c);
		 break;
	 case 2:
	     c = b * 4.50;
		 printf("Todal: R$%.2f ",c);
	 case 3:
	     c = b * 5;
		 printf("Todal: R$%.2f ",c);
		 break;
	 case 4:
	     c = b * 2;
		 printf("Todal: R$%.2f ",c);
		 break;
	 case 5:
	     c = b * 1.50;
		 printf("Todal: R$%.2f ",c);
		 break;
	 default:
	     printf("codigo invalido");
		 break;
    }
 return(0);
}
