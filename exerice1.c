#include <stdio.h>

int main(void){
   int x = 10; //declarer une variable initialisé a 10
   int *p = &x; //pointeur qui pointe vers x
    printf("l'adresse de x est %p \n",(void *) &x); //affiche l'adresse de x
    printf("le contenu de x est %i\n",x); //affiche le contenu de x
    printf("l'adresse contenue dans px est %p\n",p); //l'adresse contenue dans px
    printf("le contenu pointé par px est %i\n",*p); //le contenu pointé par px
    return 0;
}