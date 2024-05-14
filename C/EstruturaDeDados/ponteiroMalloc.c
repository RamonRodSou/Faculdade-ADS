#include <stdio.h>
#include <stdlib.h>

main()
{

    // Lixo no endereço de memoria
    int *ptr;
    printf("Endereco: %p\n\n", ptr);

    // Lixo na variavel e ponteiro indicando endereço de memoria
    ptr = (int *)malloc(sizeof(int));
    printf("Endereco %p \nValor: %d\n\n", ptr, *ptr);

    // Atribuição do valor
    *ptr = 10;
    printf("Endereco %p \nValor: %d\n\n", ptr, *ptr);


    int x;
    x = 20;
    ptr = &x;
    printf("Endereco %p \nValor: %d\n\n", ptr, *ptr);

    ptr = (int *)malloc(sizeof(int));
    printf("Endereco %p \nValor: %d\n\n", ptr, *ptr);

    system("pause");
    return (0);
}