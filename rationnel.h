#ifndef RATIONNEL_H_INCLUDED
#define RATIONNEL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


typedef struct Fraction Fraction;
struct Fraction {
    long numerater[2];
    long denominater[2];
};

void addition ( long n1 , long d1 , long n2 , long d2);
void soustraction ( long n1 , long d1 , long n2 , long d2 );
void multiplication ( long n1 , long d1 , long n2 , long d2);
void division ( long n1 , long d1 , long n2 , long d2);
void comparaison ( long n1 , long d1 , long n2 , long d2);
void gcd ( long n1 , long d1 , long n2 , long d2);

#endif // RATIONNEL_H_INCLUDED
