/*Escriba  un  programa  entab  que  reemplace  cadenas  de  blancos
por el mínimo número de tabuladores y blancos para obtener el mismo espaciado.
Considere  los  paros  de  tabulación  de  igual  manera  que  para  detab.  Cuando  un
tabulador  o  un  simple  espacio  en  blanco  fuese  suficiente  para  alcanzar  un  paro
de tabulación, ¿a cuál se le debe dar preferencia? */
#include<stdio.h>
#define TABINC 8

int main(void)
{
    int nb,nt,pos,c;

    nb = 0;
    nt = 0;

    for(pos=1;(c=getchar())!=EOF;++pos)
        if( c == ' ')
        {
            if((pos % TABINC) != 0)
                ++nb;
            else
            {
                nb = 0;
                ++nt;
            }
        }
        else
        {
            for( ; nt > 0 ; --nt)
                putchar('\t');
            if( c == '\t')
                nb = 0;
            else
                for( ; nb > 0; --nb)
                    putchar(' ');

            putchar(c);

            if(c == '\n')
                pos = 0;
            else if ( c == '\t')
                pos = pos + ( TABINC - (pos -1) % TABINC) - 1;
        }

    return 0;
}
