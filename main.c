#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"

int main(int argc, char const *argv[])
{
    int tableau[5] = {10, 15, 3, 4, 20};
    int tableauCopie[5] = {0};

    int value = sommeTableau(tableau, 5);
    printf("%d", value);

    moyenneTableau(tableau, 5);

    copie(tableau, tableauCopie, 5);

    maximumTableau(tableauCopie, 5, 14);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", tableauCopie[i]);
    }
    
    ordonnerTableau(tableau, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", tableau[i]);
    }

    return 0;
}
