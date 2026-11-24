#include <stdio.h>

int main() {
    int n1, n2, n3;

    // Entrada dos três números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    // 1. Operações aritméticas (soma, subtração, multiplicação e divisão)
    int soma = n1 + n2 + n3;
    int subtracao = n1 - n2 - n3;
    int multiplicacao = n1 * n2 * n3;

    printf("\n--- 1. OPERACOES ARITMETICAS ---\n");
    printf("Soma (%d + %d + %d) = %d\n", n1, n2, n3, soma);
    printf("Subtracao (%d - %d - %d) = %d\n", n1, n2, n3, subtracao);
    printf("Multiplicacao (%d * %d * %d) = %d\n", n1, n2, n3, multiplicacao);

    // Divisão com verificação de zero para evitar erro de divisão por zero
    if (n2 != 0 && n3 != 0) {
        int divisaoInteira = n1 / n2 / n3;
        double divisaoReal = (double)n1 / n2 / n3;
        printf("Divisao inteira (%d / %d / %d) = %d\n", n1, n2, n3, divisaoInteira);
        printf("Divisao real ((double)%d / %d / %d) = %.2f\n", n1, n2, n3, divisaoReal);
    } else {
        printf("Divisao: nao e possivel dividir por zero.\n");
    }

    // 2. Operadores relacionais
    int n1MaiorQueN2 = (n1 > n2);
    int n2MenorQueN3 = (n2 < n3);

    printf("\n--- 2. OPERADORES RELACIONAIS ---\n");
    printf("O primeiro (%d) e maior que o segundo (%d)? %s (%d)\n",
           n1, n2, n1MaiorQueN2 ? "Verdadeiro" : "Falso", n1MaiorQueN2);
    printf("O segundo (%d) e menor que o terceiro (%d)? %s (%d)\n",
           n2, n3, n2MenorQueN3 ? "Verdadeiro" : "Falso", n2MenorQueN3);

    // 3. Operadores lógicos: primeiro positivo (n1 > 0) E segundo par (n2 % 2 == 0)
    printf("\n--- 3. OPERADORES LOGICOS ---\n");
    if ((n1 > 0) && (n2 % 2 == 0)) {
        printf("Condicao atendida: o primeiro numero (%d) e positivo E o segundo (%d) e par!\n", n1, n2);
    } else {
        printf("Condicao nao atendida: e necessario que o primeiro seja positivo (> 0) e o segundo seja par.\n");
    }

    return 0;
}