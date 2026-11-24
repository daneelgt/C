#include <stdio.h>

#define TAMANHO 5

int main() {
    int vendas[TAMANHO];
    int soma = 0;

    printf("=== Registro de Vendas Diarias ===\n");

    // Leitura dos 5 valores inteiros e armazenamento no vetor
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite a quantidade de vendas do dia %d: ", i + 1);
        scanf("%d", &vendas[i]);
        soma += vendas[i];
    }

    // Exibição de cada elemento, um por linha
    printf("\n=== Vendas Registradas por Dia ===\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Dia %d: %d\n", i + 1, vendas[i]);
    }

    // Exibição da soma total
    printf("\nTotal geral de vendas no periodo: %d\n", soma);

    return 0;
}