/*
5. Hacer una función que reciba un arreglo bidimensional de NxM y devuelva dos arreglos
unidimensionales (uno de tamaño N y otro de tamaño M) con los valores más grandes de cada
uno de los renglones y los más pequeños de cada una de las columnas.
*/

//en el N van los valores mas grandes de los renglones ??
//y en el M vann los valores mas pequeños de las columnas?? gotchu

#include <stdio.h>
#include <time.h>

#define N 5
#define M 7

int Genera (int AO[N][M]);
void Imprime (int AO[N][M]);
int Funcion(int AO[N][M], int G[N], int P[M]);
void imprimegp(int G[N], int P[M]);

int main ()
{
    srand(time(0));
    int AO[N][M], G[N], P[M];
    Genera (AO);
    Imprime(AO);
    Funcion(AO, G, P);
    imprimegp(G, P);

}

int Genera (int AO[N][M])
{
    int i, j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            AO[i][j]=rand()%40+1;
        }
    }
}

void Imprime (int AO[N][M])
{
    int ren, col;
    for (ren=0;ren<N;ren++)
    {
        for (col=0; col<M; col++)
        {
            printf("%d\t", AO[ren][col]);
        }
        printf("\n");
    }
}


int Funcion (int AO[N][M], int G[N], int P[M])
{
    int i, j, n, m;
    int max, min;

    for (i=0;i<N;i++)
    {
        min=AO[i][0];
        max=min;
        for (j=0;j<M;j++)
        {
            if (AO[i][j]>max)
            {
                max=AO[i][j];
            }
            if (AO[i][j]<min)
            {
                min=AO[i][j];
            }

        }
        G[i]=max;

    }

    for(m=0;m<M;m++)
    {
        min=AO[0][n];
        max=min;
        for(n=0;n<N;n++)
        {
            if(AO[n][m]>max)
            {
                max=AO[n][m];
            }
            if(AO[n][m]<min)
            {
                min=AO[n][m];
            }
        }
        P[m]=min;
    }
}

void imprimegp (int G[N], int P[M])
{
    int i, j;
    printf("Los valores mayores son: \n");
    for (i=0;i<N;i++)
    {
        printf("%d\t", G[i]);
    }
    printf("\n");

    printf("Los valores menores son: \n");
    for (j=0;j<M;j++)
    {
        printf("%d\t", P[j]);
    }
}
