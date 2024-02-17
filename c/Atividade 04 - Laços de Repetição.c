1)
#include <stdio.h>
#include <math.h>

int main() 
{
 int a = 1;
 while (a<=100)
 {
	printf(" mateus ");
	a++;
 }
 
 
 return(0);
}
2)
#include <stdio.h>
#include <math.h>

int main() 
{
 int a = 1;
 while (a<=1000)
 {
	printf(" %d ",a);
	a++;
 }
 return(0);
}
3)
#include <stdio.h>
#include <math.h>

int main() 
{
 int a = 1000;
 while (a>=1)
 {
	printf(" %d ",a);
	a--;
 }
 return(0);
}
4)
#include <stdio.h>
#include <math.h>

int main() 
{
 
 int n,i;
   printf("Digite o numero: ");
   scanf("%d",&n);
   
   for (i = 1; i<=n;i++){
	 printf(" %d,", i);
   }
 return(0);
}
5)
#include <stdio.h>
#include <math.h>

int main() 
{
 
  int i;
  int auxiliar = 1 ;
while( auxiliar ) {
        printf("Digite um numero qualquer ou 1 para terminar\n");
        scanf("%d", &auxiliar);
        if (auxiliar) {
            for (i=auxiliar;i>=1;i--){
              printf("%i \n",i);
            };
        }
    };
 return(0);
}
6)
#include <stdio.h>
#include <math.h>

int main() 
{
 
 int i = 1;
   while (i<=10)
   {
	i++;
	if(i%3==0);
	{
		printf(" %d ",i);
	}
   }
   
 return(0);
}
7)
#include <stdio.h>
#include <math.h>

int main() 
{
 
 int n,i;
   printf("Digite o numero: ");
   scanf("%d",&n);
   
   for (i = 1; i<=n;i++){
	 if (i%5==0)
	 {
		printf(" %d ",i);
	 }
	 
   }
 return(0);
}
8) 
#include <stdio.h>
#include <math.h>
main(){
    int n, a = 0;
    printf("digite um numero ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {   
        if (i%2==0)
        {
            a++;
        }    
    }printf(" %d ",a);
return 0;
}

9)

#include <stdio.h>
#include <math.h>

int main() 
{
   for (int i = 1; i==1;scanf("%d",&i)){
	    printf("Digite o numero: ");
   }
   printf("Fim do Programa ");
 return(0);
}
10)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i+= 2)
        printf("%d ", i * i);
    printf("\n\n");
}
11)
#include <stdio.h>
#include <math.h>

int main()

{

   int n,i;

   printf("Digite o numero: ");

   scanf("%d",&n);

   printf("Os impares ate esse numero sao:");

   for (i = 1; i<=n; i = i+2)

       printf(" %d,", i);

   return 0;

}
