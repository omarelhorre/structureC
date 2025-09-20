#include <stdio.h>
#include <stdlib.h> // cette librairie nous permet d'utiliser des fonction comme malloc(), calloc(), realloc().

int main(void){
    int taille;

    //loop prompt et demander a l'utilisateur la taille a allouer
    do{
    printf("entrer la taille de votre tableau : ");
    scanf("%d",&taille);}while(taille<1);   

  
    int *p = (int *) calloc(taille,sizeof(int)); //allouer les cases dans la memoire NB que il y aura que des 0 dans les cases aloués pas comme malloc ( on verra ca lors de la comparaison ).
    if (p==NULL) exit(1); //si il n'y a pas de memoire pour allouer
    /* explication de la fonction calloc(): elle prend deux arguments taille, byte pour alouer a une seule case. */
//loop affichage 

for(int i = 0; i<taille ; i++){
        printf("T[%d] = %d \n", i,p[i]); // j'ai ecrit T juste pour la convention.
    }

    printf("\n \n \n");
    //loop
    for(int i = 0; i<taille ; i++){
        p[i] = i;
        p[i] = p[i] * p[i];
        printf("T[%d] = %d \n", i,p[i]); // j'ai ecrit T juste pour la convention.
    }
free(p); 
return 0;
    
}


