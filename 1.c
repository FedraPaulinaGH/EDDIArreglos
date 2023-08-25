/*
1. Hacer una función en C que reciba un arreglo de tamaño N y un índice pos, la función deberá
regresar la suma de los valores comprendidos a partir de la posición pos y hasta el final del
arreglo.
*/

#include <stdio.h>
#include <time.h>
#define N 15

int Recibe(int *n);
int Genera(int Ar[N], int *n);
int Calcula(int Ar[N], int *n, int p);

int main()
{
    int n, p;
    int Ar[N];
    srand(time(0));
    p=Recibe(&n);
    Genera(Ar, &n);
    Calcula(Ar, &n, p);
}

int Recibe(int *n)
{
    int pos;
    printf("cual es el tamaño del arreglo? ");
    scanf("%d", n);
    printf("cual es la posicion: ");
    scanf("%d", &pos);

    while(pos>=*n)
    {
        printf("\nLa posicion debe ser menor al tamaño del arreglo, intente de nuevo");
        scanf("%d", &pos);

    }
    return pos;

}

int Genera(int Ar[N], int *n)
{
    int cont;
    for (cont=0; cont<*n;cont++)
    {
        Ar[cont]=rand()%20;
        printf("[%d]\t", Ar[cont]);
    }
}

int Calcula(int Ar[N], int *n, int p)
{
    int suma=0, cont;
    cont=p-1;
    while (cont<*n)
    {
        suma+=Ar[cont];
        cont++;
    }
    printf("\n\nLa suma desde la posicion %d hasta el final del arreglo es: %d", p, suma);
}
