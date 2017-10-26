#include <stdio.h>
#include <stdlib.h>

float addition ( float n1 , float d1 , float n2 , float d2 );
float soustraction ( float n1 , float d1 , float n2 , float d2);
float multiplication ( float n1 , float d1 , float n2 , float d2 );
float division ( float n1 , float d1 , float n2 , float d2);
float comparaison ( float n1 , float d1 , float n2 , float d2);
int PGCD(int n1, int n2);

int PGCD(int n1, int n2) {
  if (a % b == 0) return b;
  return PGCD(b, a % b);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
