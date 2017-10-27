#include "rationnel.h"

int main()
{
    double n1, d1, n2, d2;
    int choix;
    printf("------Bienvenue Que voulez vous faire--------\n");
    printf(".........1-Addition........\n........2-Soustraction.........\n");
    scanf("%d",&choix);

    switch (choix) {

    case 1 : {
    printf("Numerateur 1 :");
    scanf("%lf",&n1);
    printf("\nDenominateur 1 :");
    scanf("%lf",&d1);
    printf("\nNumerateur 2 :");
    scanf("%lf",&n2);
    printf("\nDenomiteur 2 :");
    scanf("%lf,&d2);
    printf("\naddtion de %lf / %lf + %lf / %lf est : %lf", n1, d1, n2, d2, addition(n1, d1, n2,d2));
    break;
    }

    case 2 : {


    break;
    }

   }

}
