#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][500];
    int idade[5];
    float altura[5];
    float peso[5];
    float maiorAltura = 0;
    float menorAltura = 999;
    float maiorPeso = 0;
    float menorPeso = 999;
    int maiorIdade = 0;
    int menorIdade = 999;
    int a;

    for (a = 0; a < 5; a++)
    {
        printf("\nInforme o nome do %d� usu�rio: ", a + 1);
        scanf("%s", &nome[a]);

        fflush(stdin);

        printf("Informe a idade do usu�rio:", nome[a]);
        scanf("%d", &idade[a]);

        printf("Informe o peso do usu�rio em kg: ", nome[a]);
        scanf("%f", &peso[a]);

        printf("Informe a altura do usu�rio em metros: ", nome[a]);
        scanf("%f", &altura[a]);

        maiorIdade = idade[a] > maiorIdade ? idade[a] : maiorIdade;
        menorIdade = idade[a] < menorIdade ? idade[a] : menorIdade;
        maiorPeso = peso[a] > maiorPeso ? peso[a] : maiorPeso;
        menorPeso = peso[a] < menorPeso ? peso[a] : menorPeso;
        maiorAltura = altura[a] > menorAltura ? altura[a] : maiorAltura;
        menorAltura = altura[a] < menorAltura ? altura[a] : menorAltura;
    }
    system("CLS");
    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Maior Peso: %.1f\n", maiorPeso);
    printf("Menor Peso: %.1f\n", menorPeso);
    printf("Maior Altura: %.2f\n", maiorAltura);
    printf("Menor Altura: %.2f\n", menorAltura);
}