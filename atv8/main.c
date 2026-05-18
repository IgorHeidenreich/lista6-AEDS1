#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalVeiculos;
    float valorAluguel;

    float alugadosMes;
    float faturamentoMensal;
    float faturamentoAnual;

    float atrasados;
    float valorMultas;

    float veiculosManutencao;
    float gastoManutencao;

    FILE *arq = fopen("resultado.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    printf("Digite a quantidade de veiculos: ");
    scanf("%d", &totalVeiculos);

    printf("Digite o valor do aluguel: ");
    scanf("%f", &valorAluguel);

    alugadosMes = totalVeiculos / 3.0;
    faturamentoMensal = alugadosMes * valorAluguel;
    faturamentoAnual = faturamentoMensal * 12;

    atrasados = alugadosMes / 10.0;
    valorMultas = atrasados * (valorAluguel * 0.2);


    veiculosManutencao = totalVeiculos * 0.02;
    gastoManutencao = veiculosManutencao * 600;

    printf("\nFaturamento anual: R$ %.2f\n", faturamentoAnual);
    printf("Valor ganho com multas por mes: R$ %.2f\n", valorMultas);
    printf("Gasto anual com manutencao: R$ %.2f\n", gastoManutencao);


    fprintf(arq, "%.2f\n", faturamentoAnual);
    fprintf(arq, "%.2f\n", valorMultas);
    fprintf(arq, "%.2f\n", gastoManutencao);

    fclose(arq);

    return 0;
}