// #include <stdio.h>
// #define Tamanho 20
 
// struct func
// {
//             int matricula;
//             char nome[50];
//             char setor[30];
//             float salario;
// };
 
// struct func ficha[20];

 
// int main()
// {
            
//             printf("%s", ficha[0].nome);
//             return (0);
// }


// #include <stdio.h>
// int main() {

// int matriz[10][20];

// for (int i = 1 ; i <= 10 ; i++){
//      for (int j = 1 ; j <= 20 ; j++){
//             printf("%d ", matriz[i][j]);
//       }
//      printf("\n");
// }
// }


#include <stdio.h>
int main(){
            int i, N = 3, res;
            for(i = 1; i <= 10; i++){
                        res = N * i;
                        printf("%d x %d = %d\n", i, N, res);
            }
}