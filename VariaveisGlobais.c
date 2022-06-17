// Variavel Global

#include <stdio.h>
int x = 10;
int testar()
{
    return 2 * x;
}
int main()
{
    printf("\n Valor de x global = %d", x);
    printf("\n Valor de x global alterado na funcao testar() = %d", testar());
    return 0;
}
