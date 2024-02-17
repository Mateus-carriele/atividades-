1)
#include <stdio.h>
#include <stdlib.h>
void p (int s){
	if (s % 2 == 0){
		printf("par");
	}else{
		printf("impar");
	}
}
int main() {
	p(8);

	return 0;
}
2)
#include <stdio.h>
#include <stdlib.h>
void p (int s){
	int m = s + 1;
	printf("%d", m);
}
int main() {
	p(8);

	return 0;
}
3)
#include <stdio.h>
#include <stdlib.h>
void p (int s, int m){
	if (s>m){
		printf("%d", s);
	}else{
		printf("%d", m);
	}
}
int main() {
	p(8,10);

	return 0;
}
4)
#include <stdio.h>
#include <stdlib.h>
void p (int s){
	if (s>= 0 && s < 4){
		printf("reprovado");
	}else if (s>= 4 && s<7){
		printf("prova final");
	}else if (s>=7 && s <=10)
	{
		printf("aprovado");
	}else{
		printf("numero invalido");
	}
	
}
int main() {
	p(8);

	return 0;
}
5)
#include <stdio.h>
#include <stdlib.h>
float e (float a, int p){
	float imc = p /(a * a);
	return imc;
	
}
int main() {
	int p;
	float a, imc;
	printf("qual o seu peso\n");
	scanf("%d",&p);
	printf("qual a sua altura\n");
	scanf("%f",&a);

	imc = e(a,p);
	printf("Imc = %f", imc);
	return 0;
}
6)
#include <stdio.h>
#include <stdlib.h>
float e (float lado){
	float area = (lado*lado);
	return area;

}
int main() {
	float lado, area;
	printf("qual o valor do lado\n");
	scanf("%f",&lado);

	area = e(lado);
	printf("Area = %f", area);
	return 0;
}
7)
#include <stdio.h>
#include <stdlib.h>
float e (float altura,float base){
	float area = ((base*altura)/2);
	return area;

}
int main() {
	float base, altura, area;
	printf("qual o valor da base\n");
	scanf("%f",&base);
	printf("qual o valor da altura\n");
	scanf("%f",&altura);

	area = e(altura, base);
	printf("Area = %f", area);
	return 0;
}
