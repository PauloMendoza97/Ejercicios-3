/* Este programa imprime el histograma de las longitudes de las palabras de su entrada*/

#include <stdio.h>
#define Tamano_Arreglo  100

int main()
{
    printf("\nIntroduzca una cadena y se imprimira un histograma por la cantidad de caracteres de cada palabra\n\n");

    int c,i,s;
    int numero_palabra = 1;
    int longitud_palabra_mas_larga = 0;
    int palabra_mas_larga = 0;
    int caracteres[Tamano_Arreglo] = {0};
    while ( (c = getchar()) != EOF)
    {
        if( c == '\t'  || c == '\n' || c == ' ' )
        {
            if (longitud_palabra_mas_larga < caracteres[numero_palabra])
            {
                longitud_palabra_mas_larga = caracteres[numero_palabra];
                palabra_mas_larga = numero_palabra;
            }
        numero_palabra++;
        }
        else  caracteres[numero_palabra]++;
    }
    printf("Numero de palabra es: %d ", numero_palabra - 1);
    printf("\n\n");
    for ( s = longitud_palabra_mas_larga; s >= 1; s-- )
    {
        for ( i = 1; i <= numero_palabra; i++ )
        {
            if ( caracteres[i] >= s )
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
