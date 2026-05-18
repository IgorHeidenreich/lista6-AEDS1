#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n;
    int leitor;
    int contador = 0;

    printf("Insira a quantidade de letras: ");
    scanf("%d",&n);

    char letras [n];

    for (int i = 0; i < n; i++){
        printf("\nDigite a letra %d: ",i+1);
        scanf(" %c",&letras[i]);
    }

    FILE *arq1 = fopen("letras.txt","w");


    for (int i = 0; i < n; i++){
        fprintf(arq1,"%c\n",letras[i]);
    }

    fclose(arq1);
    FILE *arq2 = fopen("letras.txt","r");

    while ((leitor = fgetc(arq2)) != EOF){
        if (leitor == 'a' || leitor == 'e' || leitor == 'i' || leitor == 'o' || leitor == 'u' ||
        leitor == 'A' || leitor == 'E' || leitor == 'I' || leitor == 'O' || leitor == 'U'){

             contador++;
        }
    }
    fclose(arq2);
    printf("Quantidade de vogais: %d",contador);
    return 0;
}