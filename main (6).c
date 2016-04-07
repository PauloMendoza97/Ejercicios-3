/* Corrija  la rutina  principal  del  programa de  la  línea  más larga  de
modo que imprima correctamente la longitud de líneas de entrada arbitrariamen­
te largas, y tanto texto como sea posible. */

#include<stdio.h>
#define MAXLINE 1000

int getline(char line[],int lim);
void copy(char to[],char from[]);


int main(void)
{
    int len,max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max =0;
    while((len=getline(line,MAXLINE)) > 0)
    {
        if(len > max)
        {
            max = len;
            copy(longest,line);
        }
    }

    if(max>0)
        printf("%s",longest);
}


int getline(char s[],int lim)
{
    int i,c;

    for(i=0;i<lim-1 && (c=getchar())!=EOF && c !='\n';++i)  s[i] = c;

    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
void copy(char to[],char from[])
{
    int i;
    i=0;
    while((to[i]=from[i]) != '\0')    ++i;
}
