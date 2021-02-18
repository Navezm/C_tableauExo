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

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    for (int i = 0; i < tailleTableau; i++)
    {
        if (tableau[i] > valeurMax)
        {
            tableau[i] = 0;
        }
        
    }
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    for (int i = 0; i < tailleTableau; i++)
    {
        for (int j = i+1 ; j < tailleTableau; j++)
        {
            if (tableau[i] > tableau[j])
            {
                int a = 0;
                a = tableau[j];
                tableau[j] = tableau[i];
                tableau[i] = a;
            }
        }
    }
}
