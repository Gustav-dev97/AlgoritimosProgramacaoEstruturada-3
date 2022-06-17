// Recursividade

#include <stdio.h>
int somar(int valor)
{
    if (valor != 0)
    {                                    // critério de parada
        return valor + somar(valor - 1); // chamada recursiva
    }
    else
    {
        return valor;
    }
}
int main()
{
    int n, resultado;
    printf("\n Digite um numero inteiro positivo : ");
    scanf("%d", &n);
    resultado = somar(n); // fazendo a primeira chamada da função
    printf("\n Resultado da soma = %d", resultado);
    return 0;
}
