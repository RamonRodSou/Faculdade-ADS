// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Constantes
#define tamanho 5

// Estrutura de Pilha
struct tpilha
{

    int dados[tamanho];
    int inicio;
    int fim;
};

// Variável Global
struct tpilha pilha;
int op;

// Protipação  ( Definir como será as funções )
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

// Função principal
int main()
{

    setlocale(LC_ALL, "Portuguese");
    op = 1;
    pilha.inicio = 0;
    pilha.fim = 0;

    while (op != 0)
    {

        system("cls");
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            pilha_entrar();
            break;
        case 2:
            pilha_sair();
            break;

        default:
            break;
        }
    }
    return (0);
}

// Adicionar um elemento no final da Pilha
void pilha_entrar()
{
    if (pilha.fim == tamanho)
    {
        printf("\n\tPilha está chheia, impossivel empilhar!\n\n");
        system("pause");
    }
    else
    {
        printf("\nDigite o valor a ser empiljado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}

// Retirar o último elemento da Pilha
void pilha_sair()
{
    if (pilha.inicio == pilha.fim)
    {
        printf("\n\tA pilha está vazia, impossivel desenpilhar!\n\n");
        system("pause");
    }
    else
    {
        pilha.dados[pilha.fim - 1] = 0;
        pilha.fim--;
    }
}

// Mostrar o conteúdo de Pilha
void pilha_mostrar()
{
    int i;
    printf("[ ");

    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", pilha.dados[i]);
    }
    printf("]\n\n");
}

// Mostrar menu de opcoes 

void menu_mostrar(){
    printf("\nEscolha uma Opções:\n");
    printf("1- Empilhar\n");
    printf("2- Desempilar\n");
    printf("0- Sair\n\n");
}