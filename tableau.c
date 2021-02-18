#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau)
{
    int value = 0;
    int *pointeurValue = &value;

    for (int i = 0; i < tailleTableau; i++)
    {
        *pointeurValue = *pointeurValue + tableau[i];
    }
    
    return value;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    
}