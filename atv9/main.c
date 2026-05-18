#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    int matricula;
    long int telefone;

    FILE *entrada;
    FILE *saida = fopen("saida.txt", "w");

    if (saida == NULL) {
        printf("Erro ao abrir saida.txt\n");
        return 1;
    }

    printf("1 - Teclado\n");
    printf("2 - Arquivo\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {

        int quantidade;

        printf("Quantidade de alunos: ");
        scanf("%d", &quantidade);

        for (int i = 0; i < quantidade; i++) {

            printf("\nMatricula: ");
            scanf("%d", &matricula);

            printf("Telefone: ");
            scanf("%ld", &telefone);

            fprintf(saida, "%d %ld\n", matricula, telefone);
        }
    }

    else if (opcao == 2) {

        entrada = fopen("entrada.txt", "r");

        while (fscanf(entrada, "%d %ld", &matricula, &telefone) != EOF) {

            fprintf(saida, "%d %ld\n", matricula, telefone);
        }

        fclose(entrada);
    }

    else {
        printf("Opcao invalida\n");
    }

    fclose(saida);

    return 0;
}