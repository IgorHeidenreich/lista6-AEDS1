#include <stdio.h>
#include <stdlib.h>

int main()
{
    int original = 200;

    int novo = 0;

    char *string = (char*) malloc(original * sizeof(char));

    printf("Digite uma frase\n");

    for (int i = 0; i<original; i++){
        scanf("%c",&string[i]);

        if (string[i] == '\n'){
            novo = i + 1;
            string = (char *)realloc(string, novo * sizeof(char));
            break;
        }
    }
    FILE *arq = fopen("questao2.txt","w");

    for (int i = 0; i<novo; i++){
        fprintf(arq, "%c",string[i]);
    }
    fclose(arq);
    free(string);

    return 0;
}
