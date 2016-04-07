#include<stdio.h>
#define LIMITE 1000

void imprimir(char [], int );
int main()
{
    int c;
    int i = 0;
    char Arreglo[LIMITE] = {0};

    printf("\nIntroduzca una cadena, y si esta es mayor a ochenta caracteres, se imprimira como salida.\n");

    while ( (c = getchar()) != EOF )
    {
        if ( c=='\n'||c=='\t'||c==' ' ) i=0;
        else if ( i > 80 )  imprimir(Arreglo, i);
        Arreglo[++i] = c;
        c=getchar();
    }
}

void imprimir( char Cadena[], int tamano)
{
    int s = 1;
    for (s  = 1; s <= tamano; s++)    printf("%c", Cadena[s]);
    printf("\n");
}
