#include <stdio.h>
#include <stdlib.h>

int main(void){
    //malloc pour 10 cases (countdown)
printf("MALLOC");
    int *p= (int*) malloc(10*sizeof(int));
    if(p==NULL)exit(1);
    int *po;
    int taille = 10;
    for (po = p; po<p+10; po++){
       *po = taille; 
       printf("%d \n",*po);
        taille--;
        
    }
printf("CALLOC");
    //calloc 

     int *pprime= (int*) calloc(10,sizeof(int));
    if(pprime==NULL)exit(1);
    int *poprime;
    taille = 10;
    for (poprime = pprime; poprime<pprime+10; poprime++){
       *poprime = taille; 
       printf("%d \n",*poprime);
        taille--;
        
    }
    
free(pprime); // je veux pas la reallouer plus tard
    //realloc( je vvais reallouer le premier cas)
    int *tmp = (int *) realloc(p, sizeof(int)*5); //cas shrink
    taille = 10;
    
    for(int i=0; i<5; i++){
        printf("%d",tmp[i] );
    }
}

  