#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


// int main () {

//     for(int i = 1; i <= 5; i++){

//         printf(" Ramon %i \n" , i );
//     }
// }


// int main() {

//     char *name[] = {"Ramon", "Antonio", "Samara", "Eloisa", "Hilda", "Luiz"};

//     for (int i = 0; i < 6; i++) {
//         printf("%s\n", name[i]);
//     }

//     return 0;
// }




// int main() {

//     int *vet[] = {15, 5, 8, 100, 41 ,-2};

//     for (int i = 0; i < 6; i++) {
//         printf("%d\n", vet[i]);
//     }

//     return 0;
// }
 

// int main() {
//     int i;
//     int total;

//     char nome[100] = "João da Silva";
//     int tam = sizeof(nome);

//     total = 0;
//     for (i = 0; i < tam; i++) {
//         if (nome[i] == ' ') {
//             total++;
//         }
//     }

//     printf("%i", total);
//     return 0;
// }


// int main () {

//     struct aluno {

//         char nome[50];
//         char disciplina[30];
//         float nota_prova1;
//         float nota_prova2;

//     };

//     struct aluno a1;
    
//     strcpy(a1.nome, "Ramon");
//     strcpy(a1.disciplina, "Engenharia de Software");
//     a1.nota_prova1 = 8.9;
//     a1.nota_prova2 = 9.9;

//     printf("Nome: %s\n", a1.nome);
//     printf("Disciplina: %s\n", a1.disciplina);
//     printf("Nota da prova 1: %.2f\n", a1.nota_prova1);
//     printf("Nota da prova 2: %.2f\n", a1.nota_prova2);

//     return 0;

// }

int main () {

    int conta, tree;
    int inicio = 5;

    tree = 1;
    for (conta = inicio; conta > 0; conta --){

        tree *= conta;
    //  tree = tree * conta;
    //     5= 1 * 5 = 5
    //     4= 5 * 4 = 20
    //     3= 20 * 3 = 60
    //     2= 60 * 2 = 120
    //     1= 120 * 1 = 120
    //     0
    // }
    printf ("Tree = %d", tree);
    return 0;
}