#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"

int main(int argc, char const *argv[])
{
    int tableau[5] = {10, 15, 3, 4, 20};

    int value = sommeTableau(tableau, 5);
    printf("%d", value);

    return 0;
}
