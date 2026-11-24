#include <stdio.h>

float calcular_salario_bruto(float valor_hora, float horas_trabalhadas) {
    return valor_hora * horas_trabalhadas;
}

float calcular_desconto(float salario_bruto) {
    return salario_bruto * 0.09f;
}

float calcular_salario_liquido(float salario_bruto, float desconto) {
    return salario_bruto - desconto;
}

int main() {
    float valor_hora, horas_trabalhadas;
    float salario_bruto, desconto, salario_liquido;

    printf("Digite o valor da hora de trabalho: R$ ");
    scanf("%f", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    if (valor_hora < 0 || horas_trabalhadas < 0) {
        printf("\nErro: os valores de hora e horas trabalhadas nao podem ser negativos.\n");
        return 1;
    }

    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    printf("\n--- Demonstrativo Salarial ---\n");
    printf("Salario Bruto:   R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%):   R$ %.2f\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}