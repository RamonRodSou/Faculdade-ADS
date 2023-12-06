#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale (LC_ALL, "");
    
    int quantidadeDeIgressos = 0;

    printf("Digite a quantidade de ingressos \n");
    scanf("%d", &quantidadeDeIgressos);

        if(quantidadeDeIgressos <= 1000) {
            printf("Serão Necessário 4 seguranças");
        }else{       
            if(quantidadeDeIgressos > 1000 && quantidadeDeIgressos <= 5000){
                printf("Serão Necessário 6 seguranças");
            }else{
                if(quantidadeDeIgressos > 5000 && quantidadeDeIgressos <= 10000){
                    printf("Serão Necessário 10 seguranças");
            }else{
                if(quantidadeDeIgressos > 10000 && quantidadeDeIgressos <= 20000){
                    printf("Serão Necessário 15 seguranças");
                }else{
                    if(quantidadeDeIgressos > 20000 && quantidadeDeIgressos <= 50000){
                        printf("Serão Necessário 25 seguranças");
                    }else{
                        printf("Necessário aprovação especial");
                    }
                }
            }
        }
    }
}