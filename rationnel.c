#include "operator.h"

typedef struct Fraction Fraction;
struct Fraction {
    long numerater[2];
    long denominater[2];
};

void addition (long n1 , long d1 , long n2 , long d2){
    long denomCom, resultNum = 0;
    denomCom = d1 * d2;
    resultNum = n1 * d2 + n2 * d1;
    simplification(&resultNum, &denomCom);
    printf("\naddition de : %ld/%ld + %ld/%ld = %ld/%ld", n1, d1, n2, d2, resultNum, denomCom);
}

void soustraction(long n1 , long d1 , long n2 , long d2){
    long denomCom, resultNum = 0;
    denomCom = d1 * d2;
    resultNum = n1 * d2 - n2 * d1;
    simplification(&resultNum, &denomCom);
    printf("\nsoustraction de : %ld/%ld - %ld/%ld = %ld/%ld", n1, d1, n2, d2, resultNum, denomCom);
}

long multiplication (long n1 , long d1 , long n2 , long d2 );
long division (long n1 , long d1 , long n2 , long d2);
long comparaison (long n1 , long d1 , long n2 , long d2);

long PGCD(long numerater, long denominater) {
  if (numerater % denominater == 0) return denominater;
  return PGCD(denominater, numerater % denominater);
}

void simplification(long *numerater, long *denominater) {
    long diviser = PGCD(*numerater, *denominater);
    *numerater /= diviser;
    *denominater /= diviser;
}
int menu() {
    Fraction fraction;
    int choix;
    printf("------Bienvenue Que voulez vous faire--------\n");
    printf(".........1-Addition........\n........2-Soustraction.........\n........2-multiplication.........\n........2-division.........\n");
    scanf("%d",&choix);
    printf("Numerateur 1 : ");
    scanf("%ld",&fraction.numerater[0]);
    printf("\nDenominateur 1 : ");
    scanf("%ld",&fraction.denominater[0]);
    printf("\nNumerateur 2 : ");
    scanf("%ld",&fraction.numerater[1]);
    printf("\nDenomiteur 2 : ");
    scanf("%ld",&fraction.denominater[1]);
    printf("vos nombres rationnels : %ld/%ld    %ld/%ld", fraction.numerater[0], fraction.denominater[0], fraction.numerater[1], fraction.denominater[1]);

    switch (choix) {

    case 1 :
        addition(fraction.numerater[0], fraction.denominater[0], fraction.numerater[1], fraction.denominater[1]);
        break;


    case 2 : {
        soustraction(fraction.numerater[0], fraction.denominater[0], fraction.numerater[1], fraction.denominater[1]);
    break;
    }
   }
}
