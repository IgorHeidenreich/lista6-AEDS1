#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    int leitor;
    char c;
    FILE *arq = fopen("/home/igor/Downloads/Codigos/lista6/atv2/questao2.txt", "r");
    while ((leitor = fgetc(arq))!= EOF){
        if (leitor == 'a'){
        contador++;
        }
    }
    fclose(arq);
    printf("%d CARACTERES",contador);
    return 0;
}