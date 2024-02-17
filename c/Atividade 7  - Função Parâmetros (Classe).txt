1)
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
2)
#include <stdio.h>
float area (float *b, float *a){
  float r = (2*(*b))+*a;
  return r;
  
}

int main() {
    float b = 74.2;
    float a = 1.80;
    float i = area(&b, &a);
    printf("%.2f", i);
  
    return 0;
}
3)
#include <stdio.h>
#include <math.h>
void c(float r, float *p, float *a){
    *p = 2*3.14*r;
    *a = 3.14*(r)*(r);

}
int main( ) {
    float r = 10;
    float p, a;
    c(r, &p, &a);
    printf("PERIMETRO = %f\n",p);
    printf("AREA = %f\n",a);
	return 0;

}
4)
#include <stdio.h>
#include <math.h>
int fatorial(int n){
    int i, fat ;
    if (n <= 1){
        return (1) ;
}fat = 1 ;
   for(i=2; i <= n; i++){
      fat *= i ;
      }
      
      return (fat) ;
}
int main( ) {
    printf ("fat(10): %d\n", fatorial(10)) ;

	return 0;

}
5)
#include <stdio.h>
#include <math.h>
int Fibonacci(int n){
    int a, b, i, auxiliar;
    if(n<=0){
         printf("numero invalido");
    }else if (n>=1)
    {
         a = 0;
         b = 1;
         printf("\nSerie de Fibonacci:\n\n");
         printf("%d\n", b);
         for(i = 0; i < n; i++) {
             auxiliar = a + b;
             a = b;
             b = auxiliar;
             printf("%d\n", auxiliar);
             }   
    }return n;   
}
int main( ) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    Fibonacci(n);

	return 0;

}
