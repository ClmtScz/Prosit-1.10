#include <stdio.h>
#include <stdlib.h>
#include "ratio.h"
   
int main() {

    float n;
    fraction *fra1;
    fraction *fra2;
    fraction *i;
    
    int choix;
    printf("\t\t ---Bienvenu dans la calculatrice rationnel---"); 
    printf("\n ---Que voulez vous faire---\n");
    printf("\n\n0 = Quitter \n1 = Addition  \n2 = Soustraction \n3 = Multiplication \n4 = Division \n5 = Effacer\n");
    scanf("%i",&choix);

    switch (choix) {

    case 0 :
       return 0;
    break;
       
    case 1 :
       printf("\n---Numerateur :  ");
       scanf("%lf", &fra1 *numerateur);
       printf("\n----denominateur :");
       scanf("%lf",&fra1->denominateur);
       printf("\nLe resultat de la fraction est : %2f\n",saisieFraction1(fra1));
    break;
          
    case 2 : 

    break;
          
    case 3 : 

    break;
          
    case 4 : 

    break;
          
    case 5 : 
      system("cls");
    break;
   
      n++;
    }
         
         while(n != 0);
}
