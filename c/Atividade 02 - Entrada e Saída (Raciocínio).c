1)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int b;
	int c;
	printf("digide o numero a: ");
	scanf("%i", &a);
	printf("digide o numero b: ");
	scanf("%i", &b);
	c = a;
        a = b;
        b = c;
	printf("a = %i\n", a);
	printf("b = %i\n", b);
        printf("c = %i\n", c);
	return 0;
}
2)
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float a, b, c, media; 
	printf("digide a nota 1: ");
	scanf("%f", &a);
	printf("digide a nota 2: ");
	scanf("%f", &b);
	printf("digide a nota 3: ");
	scanf("%f", &c);
	a= a * 2;
	b=b * 3;
	c=c * 5;
	media = (a+b+c) /10;
	printf("media  = %.1f\n", media);
	return 0;
}
3)
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float c, horas; 
	int a, b;
	printf("digide o seu numero: ");
	scanf("%i", &a);
	printf("digide o valor da hora de trabalho: ");
	scanf("%i", &b);
	printf("digide as horas trabalhadas: ");
	scanf("%f", &horas);
	c = b * horas;
	printf("num =  %.0i\n", a);
	printf("salario = R$ %.2f\n", c);
	return 0;
}
4)
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float a, b, c, f; 
	printf("digide o salario fixo: ");
	scanf("%f", &a);
	printf("digide o valor que foi vendido: ");
	scanf("%f", &b);
	c= (b * 0.15);
	f = a + c;
	printf("todal = R$ %.2f\n", f);
	return 0;
}
5)
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a, b, c, f, d; 
	printf("digide a distancia: ");
	scanf("%i", &a);
	b = a/1000;
	d = a/10;
	c = d%1000;
	f = a%10;
	printf("cm %i", c);
	printf(" mm %i", f);
	return 0;
}
6)
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a, b, c, f, d; 
	printf("digide a distancia: ");
	scanf("%i", &a);
	b = a/1000;
	d = a/10;
	c = d%100;
	f = a%10;
	printf("m %i", b);
	printf(" cm %i", c);
	printf(" mm %i", f);
	return 0;
}
7)
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a, b, c, f, d; 
	printf("digide a distancia: ");
	scanf("%i", &a);
	b = a/100000;
	d = a/100;
	c = d%1000;
	f = a%100;
	printf(" %i km", b);
	printf(" %i m ", c);
	printf(" %i cm", f);
	return 0;
}
8)
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a, b, c, f, d; 
	printf("digide os seguntos: ");
	scanf("%d", &a);
	f = a / 3600;
	b  = a % 3600;
	c  = b / 60;
	d = b % 60;

	printf(" %d hr", f);
	printf(" %d mim", c);
	printf(" %d seg", d);
	
	return 0;
}
9)
#include <stdio.h>



int main() {

int valor,troco, cem , cinquenta , vinte , dez , cinco , dois , um;

scanf("%d",&valor);

troco = valor;

cem = troco / 100;

troco = troco - (cem *100);

cinquenta = troco / 50;

troco = troco - (cinquenta * 50);

vinte = troco / 20;

troco = troco - (vinte * 20);

dez = troco /10;

troco = troco -(dez * 10);

cinco = troco / 5;

troco = troco - (cinco * 5);

dois = troco / 2;

troco = troco - (dois * 2);

printf("%d\n",valor);

printf("%d nota(s) de R$ 100,00\n",cem);

printf("%d nota(s) de R$ 50,00\n",cinquenta);

printf("%d nota(s) de R$ 20,00\n",vinte);

printf("%d nota(s) de R$ 10,00\n",dez);

printf("%d nota(s) de R$ 5,00\n",cinco);

printf("%d nota(s) de R$ 2,00\n",dois);

printf("%d nota(s) de R$ 1,00\n",troco);


return 0;

}
