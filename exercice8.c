#include <stdio.h>
#include <stdlib.h>

typedef struct{
   char nom[50];
   float prix;
} Produit; //creation d'un nouveau type 

int main(void){ //etape 1
    printf("combien d'elements voulez vous ? : ");
    int taille;
    scnaf("%d",&taille); 
    Produit *elem = (int *) malloc(taille * sizeof(Produit));
    for(int i=0 ; i<taille; i++){
        
      /* so confusing   scanf("%s",(elem + i).nom);
        scanf("%d",&elem[i].prix);
    }
    for(int i=0 ; i<taille; i++){
        printf("%s",elem[i].nom);
        printf("%d",elem[i].prix);
    } */


}