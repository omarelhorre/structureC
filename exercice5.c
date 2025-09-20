#include <stdio.h>
#include <stdlib.h>

void remplir(int *tab, int taille);
void ecrir(int *tab, int taille); //prototype (j'ai pas encore idee quoi mettre dans la fonction)
int main(void){
    int length;
    do{
        printf("entrer la longueur de votre tableau : ");
        scanf("%d",&length);
    } while(length <0);

    int *tab = malloc(sizeof(int)* length);

     // appel de la fonction 
     remplir(tab,length);
     printf("\n \n \n");
     ecrir(tab,length);
}

void remplir(int *tab, int taille){

    for (int i = 0 ; i<taille ; i++){
        printf("T[%d] = ",i);
        scanf("%d",(tab+i));
    }

}

void ecrir(int *tab, int taille){
    for (int i = 0 ; i<taille ; i++){
        printf("T[%d] = %d \n ",i,*(tab+i));
        
    }

    return 0;

}