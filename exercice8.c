#include <stdio.h>
#include <stdlib.h>
//on peut utiliser des fcts pour faciliter la tache mais l exercice ne demande pas ca
typedef struct{
   char nom[50];
   float prix;
} Produit; //creation d'un nouveau type 

int main(void){ //etape 2 : allocation du memoire
    printf("combien d'elements voulez vous ? : ");
    int taille;
    scanf("%d",&taille); 
    Produit *elem = (Produit *) malloc(taille * sizeof(Produit)); if(elem==NULL) exit(1); //saisi du produit:
    for(int i=0 ; i<taille; i++){
        printf("entrer le nom du %d %s element : ", i+1, i == 0? "ér":"ème"); //j'ai ajouté un traitement pour dire 1er , 2eme...
        scanf("%s",elem[i].nom); 
        printf("entrer le prix de cet article : ");
        scanf("%f",&elem[i].prix); 
    }
    //etape 3 : affiche du nom et du prix de chaque produit
    for(int i=0 ; i<taille; i++){
        printf("le nom du %d%s article est : %s, son prix est %.2f \n ",i+1, i==0? "ér":"ème", elem[i].nom, elem[i].prix);
    } 
// est ce que l'utilisateur veut ajouter des cases?
    char answer;
    do {printf("voulez vous modifier votre panier? Y/N \n");
    scanf(" %c",&answer);} while((answer != 'Y') && (answer != 'N'));
    

    //realloc

    if (answer =='Y'){

        int nvTaille; 
        do {
            printf("entrer le nombre d'article dans votre nouvel panier : ");
            scanf("%d",&nvTaille);} while(nvTaille < 1);
            
            Produit *tmp = (Produit *) realloc(elem, nvTaille * sizeof(Produit));
        if(tmp==NULL) exit(1);

            if (nvTaille > taille) {
                for(int i =taille ; i< nvTaille ; i++){
                    printf("entrer le nom du %d %s element : ", i+1, i == 0? "ér":"ème"); 
                    scanf("%s",tmp[i].nom); 
                    printf("entrer le prix de cet article : ");
                    scanf("%f",&tmp[i].prix);

                }
            }



         for(int i = 0; i<nvTaille ; i++ ){

            printf("le nom du %d%s article est : %s, son prix est %.2f \n ",i+1, i==0? "ér":"ème", tmp[i].nom, tmp[i].prix);
         }

    
        free(tmp);

        }

    return 0;
    
}



