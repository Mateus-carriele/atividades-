1)
#include <stdio.h>

int main()
{
    char nome[10];
    scanf("%s",nome);
    printf("nome: ""%s\n",nome);
}

2)
#include <stdio.h>
#include <cstring>
int main()
{
    char nome[10];
    scanf("%s",nome);
    printf("nome: ""%c\n",nome[0]);
}
3)
#include <stdio.h>
#include <cstring>
int main()
{
    char nome[10];

    scanf("%s",nome);
    
    int tam = strlen(nome);

    printf("nome: ""%s\n",nome);
    printf("Tamanho = %d\n",tam);
    return 0;
}
4)
#include <stdio.h>
#include <cstring>
int main()
{
    char login[15] = "Aluno";
    char login1[15];
    char senha[15] = "IFPI123";
    char senha1[15];        


    printf("Digite o Login: ");
    scanf("%s", login1);

    printf("Digite a Senha: ");
    scanf("%s", senha1);

    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
        printf("\n\nLogin Realizado!\n\n");
    }else{
        printf("\n\nLogin ou senha Invalidos!\n\n");
    }      
}
5)
#include <stdio.h>
int main() {
    char bin[100];
    int count = 0;

    printf("Informe os caracteres: ");
    fgets(bin, sizeof(bin), stdin);

    for (int i = 0; bin[i] != '\0'; ++i) {
        if ('1' == bin[i])
            ++count;
    }

    printf("Quantidade de 1 = %d", count);
    return 0;
}
