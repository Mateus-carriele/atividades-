1)
#include <stdio.h>

int main() {
   float l[4];
   l[0] = 7.9;
   l[1] = 5.9;
   l[2] = 1.9;
  
   l[1] = 7.8;
  
   printf("3º nota = %.1f\n",l[2]); 
  
   printf("nota alterada = %.1f\n",l[1]); 
  
   printf("soma de todas as notas = %.1f\n", l[0]+l[1]+l[2]);
  
  printf("Media de todas as notas = %.1f\n", (l[0]+l[1]+l[2])/3);
  
  
    return 0;
}
2)
#include <stdio.h>

int main() {
   int l[5];
   l[0] = 7;
   l[1] = 5;
   l[2] = 1;
   l[3] = 9;
   l[4] = 19;
  
   int e;
   printf("digite um valor \n");
   scanf("%d",&l[1]);
   printf("elemento alterado = %d\n", l[1]);
  
   printf("último elemento = %d\n",l[4]); 
  
   printf("primeiro elemento = %d\n",l[0]); 
   
   printf("soma dos elementos = %d\n",(l[0]+l[1]+l[2]+l[3]+l[4])/5);
  
  
    return 0;
}
3)
#include <stdio.h>

int main() {
   int l[5];
   l[0] = 7;
   l[1] = 5;
   l[2] = 1;
   if (l[0]>l[1]){
     l[1]=l[0];
   }
    if(l[1]>l[2]){
     l[2]=l[1];
   }
  
   printf("soma dos elementos = %d\n",l[0]+l[1]+l[2]);
  
  
 return 0;
}
4)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int e;
    int l[5];
   l[0] = 2;
   l[1] = 6;
   l[2] = 5;
   l[3] = 4;
   l[4] = 7;

   e = l[0];
   l[0] = l[4];
   l[4] = e;

   e = l[1];
   l[1] = l[3];
   l[3] = e;

   for(int i=0; i<5; i++){
	 int ls = l[i];
	 printf("elemento =  %d \n",ls);
    }
 return 0;
}
5)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int l[10];
   l[0] = 1;
   l[1] = 2;
   l[2] = 3;
   l[3] = 4;
   l[4] = 5;
   l[5] = 6;
   l[6] = 7;
   l[7] = 8;
   l[8] = 9;
   l[9] = 10;
   

   for(int i=0; i<10; i++){
	 int ls = l[i];
	 printf(" %d ",ls);
	if (ls % 2 == 0){
		printf(" par = %d\n",ls);
	}
    }printf("soma de todas os elemendos = %d\n", l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8]+l[9]);
 return 0;
}
6)
#include <stdio.h>
#include <stdlib.h>
int main() {
    float l[10];
   l[0] = 1.2;
   l[1] = 2.6;
   l[2] = 3.5;
   l[3] = 4.4;
   l[4] = 5.7;
   l[5] = 6.9;
   l[6] = 7.8;
   l[7] = 8.9;
   l[8] = 9.0;
   l[9] = 10.0;
   

   for(int i=0; i<10; i++){
	 float ls = l[i];
	 printf(" nota =  %.1f ",ls);
	if (ls >7){
		printf(" aprovado = %.1f\n",ls);
	}else if (ls<=7)
    {
        printf(" prova fonal = %.1f\n",ls);
    }
    
    }printf("soma de todas os elemendos = %.1f\n", l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8]+l[9]);
    printf("media de todas os elemendos = %.1f\n", (l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8]+l[9])/10);
 return 0;
}
