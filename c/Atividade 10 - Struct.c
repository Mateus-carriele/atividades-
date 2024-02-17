1)
#include <stdio.h>
struct niver{
  int dia;
  int mes;
  int ano;
};

int main() {
  struct niver mateus;
  struct niver hugo;
  mateus.dia = 13;
  mateus.mes = 11;
  mateus.ano = 2002;

  hugo.dia = 03;
  hugo.mes = 01;
  hugo.ano = 2012;

  printf("O niver do mateus e no dia  %d/%d/%d\n",mateus.dia, mateus.mes,mateus.ano);

  printf("O niver do hugo e no dia %d/%d/%d\n",hugo.dia, hugo.mes,hugo.ano);
    return 0;
}
2)
#include <stdio.h>
struct hora{
  int hh;
  int mm;
  int ss;
};

int main() {
  struct hora ini;
  struct hora ter;
  ini.hh = 18;
  ini.mm = 00;
  ini.ss = 00;

  ter.hh = 21;
  ter.mm = 30;
  ter.ss = 00;
  

  printf("Início: %d:%d:%d\n",ini.hh, ini.mm,ini.ss);

  printf("Termino: %d:%d:%d\n",ter.hh,ter.mm,ter.ss);
    return 0;
}
3)
#include <stdio.h>
#include <string.h>
struct aluno{
  char mat[14];
  float med;
};
float media (float media){
    if (media>= 0 && media <4){
        printf("(reprovado)");

    }else if (media >=4 && media<7)
    {
        printf("(Prova final)");

    }else if (media >=7 && media <=10)
    {
        printf("(Aprovado)");
    }else
    {
        printf("(media invalida)");
    } 
}

int main( ) {
    struct aluno mateus;
    struct aluno pedro;
    strcpy(mateus.mat, "201901LINF290");
    mateus.med = 8.0;
    printf("%s: %.1f",mateus.mat, mateus.med);
    media(mateus.med);

    strcpy(pedro.mat, "202001LINF941");
    pedro.med = 6.8;
    printf("\n%s: %.1f",pedro.mat, pedro.med);
    media(pedro.med);
	return 0;

}
4)
#include <stdio.h>
#include <string.h>
struct aluno{
  char mat[14];
  float nota1, nota2, nota3;
};
float media (float nota1, float nota2, float nota3){
    float media = (nota1+nota2+nota3)/3;
    if (media>= 0 && media <4){
        printf("%.1f (reprovado)\n",media);

    }else if (media >=4 && media<7)
    {
        printf("%.1f (Prova final)\n",media);

    }else if (media >=7 && media <=10)
    {
        printf("%.1f (Aprovado)\n",media);
    }else
    {
        printf("(media invalida)\n");
    } 
}

int main( ) {
    struct aluno mateus;
    struct aluno pedro;
    struct aluno hugo;
    struct aluno lara;
    struct aluno ana;
   
    strcpy(mateus.mat, "201901LINF290");
    mateus.nota1 = 8.0;
    mateus.nota2 = 9.0;
    mateus.nota3 = 7.0;
    printf("%s ",mateus.mat);
    media(mateus.nota1,mateus.nota2,mateus.nota3);

    strcpy(pedro.mat, "202001LINF941");
    pedro.nota1 = 6.8;
    pedro.nota2 = 9.8;
    pedro.nota3 = 8.8;
    printf("%s ",pedro.mat);
    media(mateus.nota1,mateus.nota2,mateus.nota3);

    strcpy(hugo.mat, "202001LINF840");
    hugo.nota1 = 1.8;
    hugo.nota2 = 5.8;
    hugo.nota3 = 9.8;
    printf("%s ",hugo.mat);
    media(hugo.nota1,hugo.nota2,hugo.nota3);

    strcpy(lara.mat, "202001LINF999");
    lara.nota1 = 6.8;
    lara.nota2 = 6.8;
    lara.nota3 = 7.8;
    printf("%s ",lara.mat);
    media(lara.nota1,lara.nota2,lara.nota3);

    strcpy(ana.mat, "202001LINF225");
    ana.nota1 = 9.8;
    ana.nota2 = 9.8;
    ana.nota3 = 9.8;
    printf("%s ",ana.mat);
    media(ana.nota1,ana.nota2,ana.nota3);
	return 0;
}
