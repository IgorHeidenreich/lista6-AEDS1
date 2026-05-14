#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arq = fopen("questao1.txt","w");

    for (int i = 1; i <= 10; i++){
    fprintf(arq, "%d\n",i);
    }

    fclose(arq);

    return 0;
}
