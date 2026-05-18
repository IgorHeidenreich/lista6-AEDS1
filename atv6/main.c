#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n, soma = 0, posicao = 0;
    int *divisores;
    char texto[20];
    FILE *arq = fopen("texto.txt","w");

    if (arq == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    printf("digite um numero: ");
    scanf("%d",&n);

    divisores = (int*)malloc(n*sizeof(int));
    if (divisores == NULL){
        printf("\nErro ao alocar memoria\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++){
        if (n % i == 0) {
            divisores[posicao] = i;
            posicao++;
        }
    }

    divisores = (int*)realloc(divisores,(posicao)*sizeof(int));

    for (int i =0; i<posicao;i++){
        soma += divisores[i];
    }

    sprintf(texto,"%d",soma);
    fprintf(arq,"%s",texto);

    fclose(arq);
    free(divisores);
    return 0;
}
