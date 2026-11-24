#include <stdio.h>

int main(void) {
    int numero;
    int soma = 0;

    printf("Digite numeros inteiros para somar (digite 0 para encerrar):\n");

    //Leitura previa antes do laco while
    printf("Digite um numero: ");
    scanf("%d", &numero);

    //Teste da condicao no inicio do loop (valor sentinela = 0)
    while (numero != 0) {
        soma += numero;

        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    printf("\nSoma total dos numeros inseridos: %d\n", soma);

    return 0;
}