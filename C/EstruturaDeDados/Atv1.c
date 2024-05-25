// #include <stdio.h>

// int x;
// int *y;

// void imprimir();

// int main()
// {

//     printf("Digite o numero inteiro 25: ");
//     scanf("%d", &x);

//     y = &x;
//     imprimir();

//     *y = 12;
//     imprimir();

//     y = y + 1;
//     *y = *y + 5;
//     imprimir();

//     return (0);
// }

// void imprimir()
// {
//     printf("\nint x = %d\n", x);
//     printf("Ponteiro = %p\n", &x);

//     printf("int x = %d\n", *y);
//     printf("Ponteiro = %p\n", y);

//     printf("\n");
// }



// Dessa forma o " y = y + 1; "  o valor da variavel a qual o ponteiro aponta ele muda para 5 e o endereço de memória também é alterado 
// printf("int x = %d\n", *y);
// printf("Ponteiro = %p\n", y);
// int x = 5
// Ponteiro = 00407078

// Porém quando eu declaro assim: " *y = *y + 1; "
// o output sairia assim:
// int x = 12
// Ponteiro = 00407074



#include <stdio.h>
 
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
     printf("%d\n", *ptr+1);

    printf("%d\n", *ptr++);
    printf("%d\n", (*ptr)++);
    return 0;
}
 