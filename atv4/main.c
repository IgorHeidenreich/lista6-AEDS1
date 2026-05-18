#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int leitor;
    char string[1000000];
    int i = 0;
    int contador = 0;
    FILE *arq = fopen("/home/igor/Downloads/Codigos/lista6/atv4/texto.txt", "r");
    if (arq == NULL)
    {
        printf("erro ao abrir o arquivo\n");
        return 1;
    }
    while ((leitor = fgetc(arq)) != EOF){
        if (leitor == '\n') contador++;
        string[i] = leitor;
        i++;
    }
    string[i] = '\0';
    printf("%sNumero de linhas: %d\n",string,contador);
    fclose(arq);
    return 0;
}