#include <stdio.h>
#include <stdlib.h>
//realocation 

int main(void){
    int taille;

   
    do{
    printf("entrer la taille de votre tableau : ");
    scanf("%d",&taille);}while(taille<1);   

  
    int *p = (int *) malloc(sizeof(int) * taille);
    if (p==NULL) exit(1); 
   

    //loop
    for(int i = 0; i<taille ; i++){
        p[i] = i;
        p[i] = p[i] * p[i];
        printf("T[%d] = %d \n", i,p[i]);
    }

int nouvelleTaille;
do{printf("entrer maintenant la nouvelle taille : "); 
scanf("%d",&nouvelleTaille);}while(nouvelleTaille<1);
int *tmp = (int *) realloc(p , nouvelleTaille * sizeof(int)); // la fonction realloc prend le nom du tableau a reallouer et de combien des bytes on a besoin
if (tmp == NULL) exit(1);  // si il n'y a plus d'espace, on sort du programme 
//loop meme traitement qu'avant
for(int i=0; i< nouvelleTaille; i++){
tmp[i] = tmp[i]* 10;
printf("T[%d] = %d \n ",i, tmp[i]);}
free(tmp);
return 0;
    
}