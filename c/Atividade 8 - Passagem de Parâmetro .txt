5)
#include <stdio.h>
#include <math.h>
void bask(double a, double b, double c,double *x1, double*x2){
     double delta = (b*b) - (4*a*c);
        if (delta < 0){
            printf("\n erro delta menor que zero\n");
        }else if (delta == 0){
            *x1 = *x2 = -b / (2*a);
            printf("%lf %lf\n", *x1, *x2);
            }else{
                *x1 = (-b + sqrt(delta)) / (2*a);
                *x2 = (-b - sqrt(delta)) / (2*a);
                printf("x1 = %lf x2 = %lf\n", *x1, *x2);
                }       

    }
int main( ) {
    double a,b,c,x1,x2;
    printf("Digite qual o valor de a: \n");
    scanf("%lf", &a);
    printf("Digite qual o valor de b: \n");
    scanf("%lf", &b);
    printf("Digite qual o valor de c: \n");
    scanf("%lf", &c);
    bask(a, b, c,&x1,&x2);
    
	return 0;

}

1)
#include <stdio.h>
#include <math.h>
void impar(int *n){
    if(*n%2==0){
        printf("PAR");
    }else{
        printf("IMPAR");
    }   
}
int main( ) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    impar(&n);

	return 0;

}
2)
#include <stdio.h>
#include <math.h>
int sucessor(int *n){
    *n = *n+1;
    return *n;  
}
int main( ) {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    int r = sucessor(&n);
    printf("o seu sucessor e = %d",r);

	return 0;

}
3)
#include <stdio.h>
#include <math.h>
int sucessor(int *n, int *n2){
    if (*n>*n2){
        return *n;
    }else{
        return *n2;
    }
}
int main( ) {
    int n, n2;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    printf("Digite um numero: \n");
    scanf("%d", &n2);
    int r = sucessor(&n,&n2);
    printf("o maior e = %d",r);

	return 0;

}
4)
#include <stdio.h>
#include <math.h>
void sucessor(int *n){
    if (*n>=0&&*n<4){
        printf("reperovado");

    }else if (*n>=4&&*n<7)
    {
        printf("prova final");

    }else if (*n>=7 && *n<=10)
    {
        printf("Aprovado");
    }else{
        printf("numero invalido");
    }
    
}
int main( ) {
    int n;
    printf("Digite sua media: \n");
    scanf("%d", &n);
    sucessor(&n);
    
	return 0;

}
5)
#include <stdio.h>
float imc (float *m, float *a){
  float im = *m/((*a)*(*a));
  return im;
  
}

int main() {
    float m = 74.2;
    float a = 1.80;
    float i = imc(&m,&a);
    printf("%f", i);
  
    return 0;
}
¨6)
#include <stdio.h>
#include <math.h>
float area(float *lado){
     float a = (*lado)*(*lado);
     return a;  
    
}
int main( ) {
    float b;
    printf("Digite qual o valor do lado: \n");
    scanf("%f", &b);
    float r = area(&b);
    printf("a sua area = %f\n",r);
	return 0;

}
7)
#include <stdio.h>
#include <math.h>
float area(float *altura, float *base){
     float a = ((*base)*(*altura)/2);
     return a;  
    
}
int main( ) {
    float a,b;
    printf("Digite qual o valor da altura: \n");
    scanf("%f", &a);
    printf("Digite qual o valor da base: \n");
    scanf("%f", &b);
    float r = area(&a, &b);
    printf("a sua area = %f\n",r);
	return 0;

}
