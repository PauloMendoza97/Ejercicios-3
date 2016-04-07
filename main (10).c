
/* Escriba  un  programa  detab  que  reemplace  fabuladores  de  la  en­
trada  con  el  número  apropiado  de  blancos  para  espaciar  hasta  el  siguiente  paro
de  tabulación. Considere  un  conjunto fijo de paros de tabulación, digamos cada
ncolumnas. ¿Debe ser nuna variable o un parámetro simbólico? */

#include<stdio.h>
#define TABINC 8

int main(void)
{
  int nb,pos,c;

  nb = 0;
  pos = 1;

  while((c=getchar())!=EOF)
  {
    if( c == '\t')
    {
      nb = TABINC - (( pos - 1) % TABINC);

      while( nb > 0)
      {
        putchar('#');
        ++pos;
        --nb;
      }
    }
    else if( c == '\n')
    {
      putchar(c);
      pos = 1;
    }
    else
    {
      putchar(c);
      ++pos;
    }
  }

  return 0;
}
