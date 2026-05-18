#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char arquivo1[1000];
    char arquivo2[1000];
    char arquivo3[2000] = {0};
    int i=0;
    int leitor;

    FILE *arq1 = fopen("texto1","r");
    FILE *arq2 = fopen("texto2","r");
    FILE *arq3 = fopen("texto3","w");
    if (arq1 == NULL || arq2 == NULL || arq3 == NULL)
{
    printf("Erro ao abrir arquivo\n");
    return 1;
}

    while ((leitor = fgetc(arq1)) != EOF)
    {
        arquivo1[i] = leitor;
        i++;
    }

    arquivo1[i] = '\0';
    i=0;

        while ((leitor = fgetc(arq2)) != EOF)
    {
        arquivo2[i] = leitor;
        i++;
    }
    arquivo2[i] = '\0';

    strcat(arquivo3,arquivo1);
    strcat(arquivo3,arquivo2);

    for (int i = 0; i<strlen(arquivo3);i++)
    {
        fprintf(arq3,"%c",arquivo3[i]);
    }


    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    return 0;
}
