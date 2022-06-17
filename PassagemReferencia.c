// passagem por referencias

#include <stdio.h>
int testar(int *n1, int *n2)
{
    *n1 = -1; // tem que usar o * para acessar o conteúdo
    *n2 = -2;
    printf("\n\n Valores dentro da funcao testar(): ");
    printf("\n n1 = %d e n2 = %d", *n1, *n2);
    return 0;
}
int main()
{
    int n1 = 10;
    int n2 = 20;
    printf("\n\n Valores antes de chamar a funcao: ");
    printf("\n n1 = %d e n2 = %d", n1, n2);
    testar(&n1, &n2);
    printf("\n\n Valores depois de chamar a funcao: ");
    printf("\n n1 = %d e n2 = %d", n1, n2);
    return 0;
}
