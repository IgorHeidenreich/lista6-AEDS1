#include <stdio.h>
#include <stdlib.h>


int main()
{
    float media, min, max, total = 0;
    float *numeros = (float *)malloc(100*sizeof(float));
    int i=0;

    FILE *arq = fopen("entrada.txt","r");

    while (fscanf(arq,"%f",&numeros[i]) != EOF){
        i++;
    }
    
    numeros = (float*)realloc(numeros,i*sizeof(float));

    min = numeros[0];
    max = numeros[0];

    for (int j = 0; j < i; j++){
        if (numeros[j] < min){
            min = numeros[j];
        }
        if (numeros[j] > max){
            max = numeros[j];
        }
        total+=numeros[j];
    }
    media = total/i;

    printf("Maior numero: %.2f\n",max);
    printf("Menor numero: %.2f\n",min);
    printf("Media: %.2f",media);

    fclose(arq);
    free(numeros);
    return 0;
}
