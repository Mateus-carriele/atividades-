#include <stdio.h>
#include <stdlib.h>
#include <cstring>

//* cod  : código do pedido
//* item : número do item
//* quant: quantidade
//* mesa : número da mesa
//* obs  : observação

struct pedidos {
    int cod, item, quant, mesa;
    char obs[50];
};



int TAMANHO = 10;

struct pedidos *pedido = (pedidos*) malloc(TAMANHO*sizeof(pedidos));

int prox = 0;



void exibirPedidos() {
    for (int i = 0; i < prox; i++) {
        printf("código do pedido :%d\número do item :%d\nquantidade : %d\nnúmero da mesa : %d\nobservação : %s\n\n\n", pedido[i].cod, pedido[i].item, pedido[i].quant, pedido[i].mesa, pedido[i].obs);
    }
}



void adicionar(int cod, int item, int quant, int mesa, char obs[]) {
   pedido[prox].cod = cod;
   pedido[prox].item = item;
   pedido[prox].quant = quant;
   pedido[prox].mesa = mesa;
   strcpy(pedido[prox].obs, obs);
   prox++;
}



void excluirPedido(int cod) {
    int ind = 0;
    for (int i = 0 ; i < prox; i++) {
        if (pedido[i].cod == cod) {
            ind = i;
        }
    }
    for (int i = ind; i < prox-1; i++) {
        pedido[i] = pedido[i+1];
    }
    prox--;
}



int main() {
    int entrada = 1;
    int cod, item, quant, mesa;
    char obs[50];
    int cod_f = 0;
    while (entrada != 0) {
        printf("**************************MENU******************************\n");
        printf("1 - Adicionar Pedido \n");
        printf("2 - Excluir Pedido \n");
        printf("3 - Exibir Pedidos \n");

        printf("0 - Sair \n");
        printf("Escolha uma opção:");
        scanf("%d",&entrada);
        printf("**************************************************************\n");
        switch (entrada){
            case 1:
                printf("Digite o código do pedido:");
                scanf("%d", &cod);
                printf("Digite o número do item:");
                scanf("%d", &item);
                printf("Digite o número da mesa:");
                scanf("%d", &mesa);
                printf("Digite a quantidade:");
                scanf("%d", &quant);
                printf("Digite a observação:");
                scanf("%s",obs);
                adicionar(cod, item, mesa, quant, obs);
                break;
            case 2:

                printf("qual o código do pedido que você deseja excluir ?\n");
                scanf("%d",&cod_f);
                excluirPedido(cod_f);
                break;
            case 3:
                exibirPedidos();
                break;
            case 0:
                 printf("Saindo do programa....\n");
                 break;
            default:
                printf("Opção inválida \n");
        }
        printf("***************************************************************\n");
    }
    printf("Fim do Programa\n");
}
