#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi;

float xf;
float *ptr_xf;

char xc;
char *ptr_xc;

void imprimir();

int main()
{
    xi = 10;
    ptr_xi = &xi;
    imprimir();

    xi = 20;
    imprimir();

    xi = 30;
    imprimir();

    system("pause");
    return (0);
}

void imprimir()
{
    printf("\nValor de xi: %d \n", xi);
    printf("\nValor de poneiro xi, end. de memoria: %p \n", &xi);
    printf("\nValor ptr_xi: %p \n", ptr_xi);
    printf("\nValor *ptr_xi: %d \n", *ptr_xi);
}