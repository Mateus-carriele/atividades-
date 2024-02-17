5) 
/// não  consegui fazer toda ///

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int dia, mes, ano;
}compromisso;

void imprimir(compromisso **c, int quant, int mm){

    printf("\n\t\tAgendar Compromissos:\n");
    printf("\t--------------------------------\n");
    for(int i = 0; i < quant; i++){
      
        if (c[i]->mes == mm);
        {
            printf("\t%d = %2d/%2d/%4d\t%s\n", i+1, c[i]->dia, c[i]->mes, c[i]->ano, c[i]->nome);
        }
        
    }
    printf("\t--------------------------------\n");
}

int cadastrar_compromisso(compromisso **c, int quant){

    
        compromisso *novo = malloc(sizeof(compromisso));

        printf("\nDigite a descriçao da agenda: ");
        scanf("%50[^\n]", novo->nome);
        printf("\nDigite a compromisso do Compromisso  dd/mm/aaaa: ");
        scanf("%d/%d/%d", &novo->dia, &novo->mes, &novo->ano);
        getchar();
        c[quant] = novo;
        return 1;
}

int main(){
    int mm;

    compromisso *agenda[50];
    int opcao = 50, quant = 0;

    do{
        printf("\n\t0 - Sair\n\t1 - Agendar Compromisso,\n\t2 - Exibir Compromissos\n\t");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            quant += cadastrar_compromisso(agenda, quant);
            break;
        case 2:
            printf("escolha o mes (1 - 2 - 3)");
          scanf("%d",&mm);
            switch (mm)
            {
            case 1:
                imprimir(agenda, quant,mm);
                break;
            case 2:
                imprimir(agenda, quant,mm);
                break;
            case 3:
                imprimir(agenda, quant,mm);
                break;
            case 4:
                imprimir(agenda, quant,mm);
                break;
            case 5:
                imprimir(agenda, quant,mm);
                break;
            case 6:
                imprimir(agenda, quant,mm);
                break;
            case 7:
                imprimir(agenda, quant,mm);
                break;
            case 8:
                imprimir(agenda, quant,mm);
                break;
            case 9:
                imprimir(agenda, quant,mm);
                break;
            case 10:
                imprimir(agenda, quant,mm);
                break;
            case 11:
                imprimir(agenda, quant,mm);
                break;
            case 12:
                imprimir(agenda, quant,mm);
                break;
            
            default:
                break;
            }
            break;
        default:
            if(opcao != 0)
                printf("\n\tOpcao invalida!!!\n");
        }
    }while(opcao != 0);

    return 0;
}
