#include <stdio.h>
#include <stdlib.h>
#include "ratio.h"
   int main()
{

    fraction *fra1;
    fraction *fra2;
    fraction *i;
    int choix;
    printf("------Bienvenue Que voulez vous faire--------\n");
    printf(".........1-Addition........\n........2-Soustraction.........\n");
    scanf("%i",&choix);

    switch (choix) {

    case 1 : {
    printf("\n---Numerateur :  ");
    scanf("%lf", &fra1 *numerateur);
    printf("\n----denominateur :");
    scanf("%lf",&fra1->denominateur);
    printf("\nLe resultat de la fraction est : %2f\n",saisieFraction1(fra1));
    break;
    }

    case 2 : {


    break;
    }

   }

}
