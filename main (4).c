
#include <stdio.h>
#define TAMANO 256 /* El conjunto de caracteres ASCII */


int main()
{
    printf("Ingrese una cadena de caracteres y se mostrara su frecuencia\n\n");
    int caracteres[TAMANO] ;
    int i=0,j=0;
    int c;
    for(i=0;i<TAMANO;i++)  caracteres[i]=0;
    while ((c=getchar()) != EOF)  caracteres[c]++;
    for (i= 0;i<=TAMANO;i++)
    {
        if (caracteres[i]!=0)
        {
            putchar(i);
            for(j=1;j<=caracteres[i];j++)
            printf("*");
            printf("\n");
        }
    }

    return 0;
}
