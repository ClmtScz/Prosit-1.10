#ifndef RATIONNEL_H_INCLUDED
#define RATIONNEL_H_INCLUDED

float addition ( float n1 , float d1 , float n2 , float d2){
    float add;
    add = ((n1*d2) + (n2*d1))/d1*d2;
    return add;
}


float soustraction ( float n1 , float d1 , float n2 , float d2 );
float multiplication ( float n1 , float d1 , float n2 , float d2);
float division ( float n1 , float d1 , float n2 , float d2);
float comparaison ( float n1 , float d1 , float n2 , float d2);
float gcd ( float n1 , float d1 , float n2 , float d2);

#endif // RATIONNEL_H_INCLUDED
