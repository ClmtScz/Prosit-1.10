#include <stdio.h>
#include <stdlib.h>
#include "rationnel.h"

#include <stdio.h>
#include <stdlib.h>
#include "rationnel.h"

int main()
{
    float n1, d1, n2, d2;
    int choix;
    printf("------Bienvenue Que voulez vous faire--------\n");
    printf(".........1-Addition........\n........2-Soustraction.........\n");
    scanf("%i",&choix);

    switch (choix) {

    case 1 : {
    printf("Numerateur 1 :");
    scanf("%f",&n1);
    printf("\nDenominateur 1 :");
    scanf("%f",&d1);
    printf("\nNumerateur 2 :");
    scanf("%f",&n2);
    printf("\nDenomiteur 2 :");
    scanf("%f",&d2);
    printf("\naddtion de %f / %f + %f / %f est : %f", n1, d1, n2, d2, addition(n1, d1, n2,d2));
    break;
    }

    case 2 : {


    break;
    }

   }

}
