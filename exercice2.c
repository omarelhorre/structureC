#include <stdio.h>
#include <stdlib.h> // cette librairie nous permet d'utiliser des fonction comme malloc(), calloc(), realloc().

int main(void){
    int taille;

    //loop prompt et demander a l'utilisateur la taille a allouer
    do{
    printf("entrer la taille de votre tableau : ");
    scanf("%d",&taille);}while(taille<1);   

  
    int *p = (int *) malloc(sizeof(int) * taille); //allouer les cases dans la memoire NB que il y aura des elements aléatoire pas comme calloc().

    /* explication de la fonction malloc(): elle prend un argument, c'est les bytes a allouer. */

    //loop
    for(int i = 0; i<taille ; i++){
        p[i] = i;
        p[i] = p[i] * p[i];
        printf("T[%d] = %d \n", i,p[i]); // j'ai ecrit T juste pour la convention.
    }
free(p); //pour pouvoir allouer une autre fois.
return 0;
    
}

