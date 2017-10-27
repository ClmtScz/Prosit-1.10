#include <stdio.h>
#include <stdlib.h>
#include "rationnel.h"


long PGCD(long numerater, long denominater) {
  if (numerater % denominater == 0) return denominater;
  return PGCD(denominater, numerater % denominater);
}
//~~~~~~~~~~~~~//
void simplification(long *numerateur, long *denominateur) {
    long diviser = PGCD(*numerateur, *denominateur);
    *numerateur /= diviser;
    *denominateur /= diviser;
}
//~~~~~~~~~~~~~//
void addition (long n1 , long d1 , long n2 , long d2){
    long denomCom, resultNum = 0;
    denomCom = d1 * d2;
    resultNum = n1 * d2 + n2 * d1;
    simplification(&resultNum, &denomCom);
    printf("\naddition de : %ld/%ld + %ld/%ld = %ld/%ld", n1, d1, n2, d2, resultNum, denomCom);
}
//~~~~~~~~~~~~~//
void soustraction(long n1 , long d1 , long n2 , long d2){
    long denomCom, resultNum = 0;
    denomCom = d1 * d2;
    resultNum = n1 * d2 - n2 * d1;
    simplification(&resultNum, &denomCom);
    printf("\nsoustraction de : %ld/%ld - %ld/%ld = %ld/%ld", n1, d1, n2, d2, resultNum, denomCom);
}
//~~~~~~~~~~~~~//
void multiplication (long n1 , long d1 , long n2 , long d2 ) {
	long N, D;
	N = n1 * n2;
	D = d1 * d2;
	simplification(&N, &D);
	printf("  Le resultat est %ld / %ld", N, D);
}
//~~~~~~~~~~~~~//
void division (long n1 , long d1 , long n2 , long d2) {
	long N, D;
	N = n1 * d2;
	D = n2 * d1;
	simplification(&N, &D);
	printf("  Le resultat est %ld / %ld", N, D);
}
//~~~~~~~~~~~~~//
void comparaison (long n1 , long d1 , long n2 , long d2) {
	if (n1 == n2 && d1 == d2) {
		printf("%ld/%ld et %ld/%ld sont égaux", n1, d1, n2, d2);
	} else if (n1/d1 < n2/d2) {
		printf("%ld/%ld est inférieur à %ld/%ld", n1, d1, n2, d2);
	} else {
		printf("%ld/%ld est supérieur à %ld/%ld", n1, d1, n2, d2);
	}
}
//~~~~~~~~~~~~~//

void menu() {
	Fraction fraction;
	int choix;
	printf("------Bienvenue Que voulez vous faire--------\n");
	printf(".........1-Addition........\n........2-Soustraction.........\n........3-multiplication.........\n........4-division.........\n");
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
    case 2 :
		soustraction(fraction.numerater[0], fraction.denominater[0], fraction.numerater[1], fraction.denominater[1]);
		break;
    case 3 :
		multiplication(fraction.numerater[0], fraction.denominater[0], fraction.numerater[1], fraction.denominater[1]);
		break;
    case 4 :
		division(fraction.numerater[0], fraction.denominater[0], fraction.numerater[1], fraction.denominater[1]);
		break;
	}
}
