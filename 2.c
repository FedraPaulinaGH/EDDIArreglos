/*
2. Hacer una función en C que reciba un arreglo de tamaño N y dos números a buscar, la función
deberá regresar la posición del primer elemento encontrado, en caso de no encontrar ninguno,
regresará un valor de -1.
*/
#include <stdio.h>
#include <time.h>
#define N 50

int Recibe(int *e1, int *e2);
int Busca(int Arr[N], int e1, int e2, int n);
void Imprime(int Arr[N], int n);
void print(int p);

int main()
{
    int Arr[N];
    int e1, e2, n;
    int p;

    srand(time(0));
    n=Recibe(&e1, &e2);
    Imprime(Arr, n);
    p=Busca(Arr, e1, e2, n);
    print(p);
}

int Recibe(int *e1, int *e2)
{
    int n;
    printf("De que tamano es el arreglo?: ");
    scanf("%d", &n);
    printf("Cuales son los valores que busca?");
    printf("\nValor 1: ");
    scanf("%d", e1);
    printf("Valor 2: ");
    scanf("%d", e2);
    return n;
}

void Imprime(int Arr[N], int n)
{
    int cont;
    for (cont=0; cont<n; cont++)
    {
        Arr[cont]=rand()%20;
        printf("[%d] %d\t", cont, Arr[cont]);
    }
}

int Busca(int Arr[N], int e1, int e2, int n)
{
    int cont, p, c=0;
    for (cont=0; cont<n; cont++)
    {
        p=Arr[cont];
        if (p==e1 || p==e2)
        {
            return cont;
        }
        else
        {
            c=-1;
        }
    }
    cont=c;
    return cont;
}

void print(int p)
{
    if (p>0)
    {
        printf("\nUn valor encontrado se encuentra en la posicion: %d", p);
    }
    else
    {
        printf("\nNo se encontró ningun valor");
    }
}
