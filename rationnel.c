#include <stdio.h>
#include <stdlib.h>

double addition (double n1 , double d1 , double n2 , double d2){
    double add;
    add = ((n1*d2) + (n2*d1))/d1*d2;
    return add;
}

double soustraction ( float n1 , float d1 , float n2 , float d2);
double multiplication ( float n1 , float d1 , float n2 , float d2 );
double division ( float n1 , float d1 , float n2 , float d2);
double comparaison ( float n1 , float d1 , float n2 , float d2);
double PGCD(int n1, int n2) {
  if (a % b == 0) return b;
  return PGCD(b, a % b);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
