#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau)
{
    int value = 0;
    int *pointeurValue = &value;

    for (int i = 0; i < tailleTableau; i++)
    {
        *pointeurValue =+ tableau[i];
    }
    
    return value;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    double sum = 0.0, avg = 0.0;
    for (int i = 0; i < tailleTableau; i++)
    {
        sum += tableau[i];
    }

    avg = sum / tailleTableau;
    printf("Average = %f", avg);
    return 0;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    for (int i = 0; i < tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
    }

    for (int i = 0; i < tailleTableau; i++)
    {
        printf("%d", tableauCopie[i]);
    }
    
}
