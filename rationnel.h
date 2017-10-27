#ifndef RATIONNEL_H_INCLUDED
#define RATIONNEL_H_INCLUDED

float addition ( float n1 , float d1 , float n2 , float d2){
    float add;
    add = ((n1*d2) + (n2*d1))/d1*d2;
    return add;
}


int soustraction (int n1 , int d1 , int n2 , int d2 );
int multiplication (int n1 , int d1 , int n2 , int d2);
int division (int n1 , int d1 , int n2 , int d2);
int comparaison (int n1 , int d1 , int n2 , int d2);
int gcd (int n1 , int d1 , int n2 , int d2);

#endif // RATIONNEL_H_INCLUDED
