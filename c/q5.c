#include <stdio.h>

struct Data
{
    int dia, mes, ano;
};

struct Evento
{
    char titulo[30];
    struct Data data;
};
struct Evento eventos[5];
int prox = 0;
void inserir(){
    printf("digide o dia do evento\n");
    scanf("%d", &eventos[prox].data.dia);
    printf("digide o mes do evento\n");
    scanf("%d", &eventos[prox].data.mes);
    printf("digide o ano do evento\n");
    scanf("%d", &eventos[prox].data.ano);
    printf("digide o titulo do evento\n");
    scanf("%s", eventos[prox].titulo);
    prox++;
}
void exebirmes(int opmes){
    for (int i = 0 ; i<=prox-1;i++){
        if (opmes == eventos[i].data.mes)
        {
            printf("voce tem esses Eventos para o mes %d\n", opmes);
            printf("%s - %d/%d/%d \n",eventos[i].titulo, eventos[i].data.dia, eventos[i].data.mes, eventos[i].data.ano);
        }
        
    }
}
void exibirtodos(){
    for (int i = 0 ; i<=prox-1;i++){
        printf("%s - %d/%d/%d \n",eventos[i].titulo, eventos[i].data.dia, eventos[i].data.mes, eventos[i].data.ano);
        }
}
int main(){

    

    int op = 0;


    while (op != 4 )
    {
        printf("1 - Agendor Evento\n");
        printf("2 - Exibir Evento todos\n");
        printf("3 - escalha uma mes para Exibir\n");
        printf("4 -  Sair\n");
        printf("Escolha uma opcao\n");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
               inserir();
              break;
        case 2:
              
              exibirtodos();
             break;
        case 3:
              int opmes;
              printf("qual o mes do seu Evento\n");
              scanf("%d",&opmes);
              exebirmes(opmes);
             break;
        case 4:
              op = 4;
             break;
        
        default:
            printf("A opicao invalida \n");
            break;
        }
    }
    


    return 0;
      }
