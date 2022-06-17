// Alocar Memória

#include <stdio.h>
#include <stdlib.h>
int *alocar()
{
    return malloc(200);
}
int main()
{
    int *memoria;
    memoria = alocar();
    if (memoria != NULL)
    {
        printf("Endereco de memoria alocada = %x", memoria);
    }
    else
    {
        printf("Memoria nao alocado");
    }
    return 0;
}
