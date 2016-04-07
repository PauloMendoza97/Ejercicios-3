#include <stdio.h>
/*Escriba un programa que imprima su entrada una palabra por línea. */
int main(){

	int tab,esp,cont;
	tab=esp=cont=0;
	int ingresar=getchar();
	printf("\n");
	while(ingresar!=10){

		if (ingresar==32&&cont<1)
		{
		    cont++;
		    printf("\n");
		}
		if (ingresar==9&&cont<1)
		{
		    cont++;
		    printf("\n");
		}
		if (ingresar!=9&&ingresar!=32)
        {
            putchar(ingresar);
            cont=0;
        }

	ingresar=getchar();
	}
	return 0;
}
