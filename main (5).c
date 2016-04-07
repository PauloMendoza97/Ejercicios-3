#include<stdio.h>
/*Escriba  de  nuevo  el  programa  de  conversión  de  temperatura  de
la sección 1.2, de modo que utilice una función para la conversión.*/
int convertir( int);
int main()
{
    float fahr,celsius;
    int incremento;
    incremento=20;
    fahr=0;
    printf("\nFahrenheit:  Celsius:\n");
    while (fahr<=300)
    {
        celsius = convertir( fahr);
        printf("%7.0f%13.1f\n", fahr, celsius );
        fahr+=incremento;
    }
    return;
}
int convertir( int fahrenheit )
{
    return (5.0/9.0)*(fahrenheit-32);
}
