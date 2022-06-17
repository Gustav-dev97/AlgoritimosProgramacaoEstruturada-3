/// Exemplo de chamada de função:

#include <stdio.h>
int somar()
{
    return 2 + 3;
}
int main()
{
    int resultado = 0;
    resultado = somar();
    printf("O resultado da funcao e = %d", resultado);
    return 0;
}
