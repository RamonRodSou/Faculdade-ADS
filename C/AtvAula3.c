#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct produto {   // estrutura de dados hetorogenia - pode armazenar varios tipos diferentes de dados
	int codigo;     
	char nome[30];
	float valorVenda;
};


int main() {
	
	setlocale(LC_ALL, "");


   // struct

   struct produto p;
    printf("Cadastro de produto \n ");

    printf("Digite o codigo: \n ");
    scanf("%d", &p.codigo);
    fflush(stdin);

    printf("\n Digite o nome do produto: \n ");
    scanf("%s", &p.nome);
    fflush(stdin);

    printf("\n Digite o preco da venda: R$ \n ");
    scanf("%f", &p.valorVenda);
    fflush(stdin);
    
    printf("Foi cadastrado o produto %d com nome %s com valor %f\n", p.codigo, p.nome, p.valorVenda);

    return 0;









	//VETOR   estrutura de dados homogenia - pode armazenar apenas um tipo
	/*
	int idades[5];
	float precos[10];
		
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite a idade da pessoa de número %d\n",(i+1));
		fflush(stdin);
		scanf("%d", &idades[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("A idade da pessoa de número %d é %d\n", (i+1), idades[i]);	
	}
	*/
	//STRING
	/*
	char nome[30];
	
	printf("Digite o seu nome\n");
	fflush(stdin);
	//scanf("%s", &nome);
	gets(nome);
	printf("%s", nome);
	
	if(strcmp(nome, "Joao") == 0){
		printf("O usuário digiou o nome Joao");
	}
	
	//nome = "Joao" - nao funciona, o jeito certo é a linha abaixo
	strcpy(nome, "Joao");
	printf("%s", nome);
	*/
	//MATRIZES
	/*
	int notas[2][3];
	int i,j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Digite a nota do aluno %d da prova %d\n", (i+1),(j+1));
			fflush(stdin);
			scanf("%d", &notas[i][j]);
		}
	}
	
	for(i = 0; i < 2; i++){
		float media = 0.0;
		float total = 0.0;
		for(j = 0; j < 3; j++){
			printf("%d ", notas[i][j]);			
			total = total + notas[i][j];
		}
		media = total /3;
		printf(" - Média %f", media);
		printf("\n");
	}
	//STRUCT - REGISTROS	
	struct produto p;
	printf("Cadastro de produto\n");
	printf("Digite o código\n");
	fflush(stdin);
	scanf("%d", &p.codigo);
    printf("Digite o nome\n");
    fflush(stdin);
	gets(p.nome);
	printf("Digite o valor de venda\n");
	fflush(stdin);
	scanf("%f",&p.valorVenda);
	
	printf("Foi cadastrado o produto de código %d com nome %s de valor %f\n", p.codigo, p.nome, p.valorVenda);
	
	struct produto produtos[10];
	
	return 0;


    // Matrizes


    int notas [2][3];  // 2 alunos e as 3 nostas desses 2 alunos
    int i,j ;   // i = alunos, j provas

    for (i = 0; i < 2; i ++){
        for(j = 0; j < 3; j ++){
            printf ("Digite a nota do aluno %d da prova %d: \n", (i+1), (j+1));
            fflush(stdin);
            scanf("%d", &notas[i][j]);
        }
    }
    
    for (i = 0; i < 2; i ++){
        
        float media = 0.0;
        float total = 0.0;

        for(j = 0; j < 3; j ++){
            
            printf ("%d ", notas[i][j]);
            total = total + notas[i][j];
        }
        
        media = total / 3;
        printf (" - Média %f", media);
        printf("\n");
    
    }
    return 0;
    */



   
}