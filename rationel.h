struct Fract
  {
   double numerateur;
   double denominateur;
  } Fract;

   typedef struct Fract fraction;

   double saisieFraction1 (fraction *fra1)
   {
        return (fra1->numerateur/fra1->denominateur);
   }

   double saisieFraction2 (fraction *fra2)
   {
     return (fra2->numerateur/fra2->denominateur);
   }





double additonFraction(fraction *fra1, fraction *fra2, fraction *i){

i->numerateur = ((fra1->numerateur * fra2->denominateur) + ((fra2->numerateur) * (fra1->denominateur)));
i->denominateur = i->numerateur / (fra1->denominateur * fra2->denominateur);

 return 0;
}
double soustractionFraction(fraction *fra1, fraction *fra2, fraction *i){
  
}
