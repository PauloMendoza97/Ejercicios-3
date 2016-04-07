/* Escriba  un  programa  que  elimine  los  blancos  y  los  tabuladores
que estén al final de cada línea de entrada, y que borre completamente las líneas
en blanco.*/

#include<stdio.h>
#define MAXLINE 1000

int ingresar(char line[],int lim);
int imprimir (char rline[]);

int main(void)
{
  int len;
  char line[MAXLINE];

  while((len=ingresar(line,MAXLINE))>0)
    if(imprimir(line) > 0)
      printf("%s",line);

  return 0;
}

int ingresar(char s[],int lim)
{
  int i,c;

  for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
    s[i] = c;
  if( c == '\n')
  {
    s[i]=c;
    ++i;
  }
  s[i]='\0';

  return i;
}

/* funcion de eliminar tabs y spacios al final de line*/
int imprimir(char s[])
{
  int i;

  for(i=0; s[i]!='\n'; ++i)
    ;
  --i;

  for(i >0; ((s[i] == ' ') || (s[i] =='\t'));--i)
    ;
  if( i >= 0)
  {
    ++i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
  }
  return i;
}
