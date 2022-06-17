// Calculo de média

// Exemplo de programa com variáveis globais e locais.
#include <stdio.h>
#include <conio.h>
// declaração de variáveis globais
float media, nota1, nota2;
// protótipo da função entrada
void entrada(void);
// ---------------- funçao main()-------------------
int main(void)
{
    // variável local
    char resposta;

    do
    {
        // chamada da função p/ entrada das notas
        entrada();

        // usando variáveis globais: media,nota1,nota2
        media = (nota1 + nota2) / 2;

        printf("\nMedia do aluno: %.2f\n", media);

        printf("\nDeseja calcular outra media? (s/n)");
        fflush(stdin);
        scanf("%c", &resposta);
    } while (resposta == 's');

    return (0);
}
// --------- fim da função main() -----
// função entrada de dados
// usa as variáveis globais nota1 e nota2
void entrada(void)
{
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    return;
}
