#include <stdio.h>
void doubler(int *val);
int main(void){
    int val;
    int *p = &val;
    printf("entrer votre valeur a doubler : ");
    scanf("%d",&val);
    doubler(&val);
    printf("le double est %d", val);

    return 0;
}
void doubler(int *val){
    *val = *val * 2;
}