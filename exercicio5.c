#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(){
    int vetA[N];
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        vetA[i] = rand() % 10;
        printf("A[%d] = %2d    -   B[%d] = %2d \n", i, vetA[i]);
    }
    
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        if (vetA[i] % 2 == 0)
        {
            printf("Vetor Par [%d] = %2d \n", i, vetA[i]);
        }
    }
}