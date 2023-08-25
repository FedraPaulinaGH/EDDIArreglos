/*
4. Hacer una función en C que reciba un texto (cadena de caracteres) y regrese el número de
palabras que conforman el texto. No debe limitarse a contar los espacios ya que puede haber más
de un espacio entre cada palabra.
*/

#include <stdio.h>

char Funcion(char Cad[100]);

int main()
{
    char Cad[100];
    Funcion(Cad);
}

char Funcion(char Cad[100])
{
    int k, cont, p=0;

    printf("Escribe algo: ");
    gets(Cad);

    k=strlen(Cad);
    //printf("\n%d", k);

    for (cont=0;cont<k;cont++)
    {
        if (Cad[cont]==' '|| Cad[cont]=='   ' || Cad[cont]=='   ')
        {
            p++;
        }
    }

    printf("Hay %d palabras", p);

}
