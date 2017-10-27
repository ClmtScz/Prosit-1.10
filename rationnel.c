#include <stdio.h>
#include <stdlib.h>

double addition (double n1 , double d1 , double n2 , double d2){
    double add;
    add = ((n1*d2) + (n2*d1))/d1*d2;
    return add;
}

double soustraction ( double n1 , double d1 , double n2 , double d2);
double multiplication ( double n1 , double d1 , double n2 , double d2 );
double division ( double n1 , double d1 , double n2 , double d2);
double comparaison ( double n1 , double d1 , double n2 , double d2);
double PGCD(int n1, int n2) {
  
    if (a % b == 0) return b;
  
    return PGCD(b, a % b);

}
