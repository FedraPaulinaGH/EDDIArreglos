/*
3. Hacer una función en C que reciba un arreglo de tamaño N. Dicho arreglo contiene números
que van en un rango de 1 a 9. La función deberá regresar un arreglo de tamaño 5 que contendrá
la cantidad de veces que aparecen los dígitos del 5 al 9.
*/

#include <stdio.h>
#include <time.h>
#define N 50

int Recibe();
int Genera(int A[N], int n);
int Funcion(int A[N], int n, int B[N]);
int Imprime(int B[N]);

int main ()
{
    srand(time(0));
    int A[N], B[5], n;
    n=Recibe();
    Genera(A, n);
    Funcion(A, n, B);
    Imprime(B);
}

int Recibe()
{
    int tam;
    printf("De que tamano es el arreglo? ");
    scanf("%d", &tam);
    return tam;
}

int Genera(int A[N], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        A[i]=rand()%9+1;
        printf("%d\t", A[i]);
    }
}

int Funcion(int A[N], int n, int B[N])
{
    int i, j, c=5, s=0;
    for (i=0;i<5;i++)
    {
        for (j=0;j<n;j++)
        {
            if(A[j]==c)
            {
                s++;
            }
        }
        B[i]=s;
        c++;
        s=0;
    }
}

int Imprime(int B[N])
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("\nNumero: [%d], cantidad: %d", i+5, B[i]);
    }
}
