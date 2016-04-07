#include <stdio.h>
#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */
/* cuenta líneas, palabras, y caracteres de la entrada */
int main( )
{
    int  c,ni, nw, nc, state;
    state = OUT;
    ni = nw = nc = 0;
    c = getchar( );
    while (c != EOF)
    {
         ++nc;
    if (c == '\n')
         ++ni;
    if (c == ' ' || c == '\n' || c == '\t')
        state = OUT;
    else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    c = getchar( );
    }
    printf ("%d %d %d\n", ni, nw, nc);
}//Los errores se darian en el caso de ingresar caracteres que no esten aceptados
