#include <stdio.h>

int main(){
     enum {TAILLE_TABLEAU = 5};
    int tableau[TAILLE_TABLEAU] = {10, 20, 30, 40, 50};
    int reverse[TAILLE_TABLEAU];
    for (int i = 0; i < TAILLE_TABLEAU; i++){
        printf("tableau[%d] = %d\n", i, tableau[i]);
    }
    for (int i = 0; i < TAILLE_TABLEAU; i++){
        reverse[TAILLE_TABLEAU - 1 - i] = tableau[i];
        
    }
    for (int i = 0; i < TAILLE_TABLEAU; i++){
    printf("reverse[%d] = %d\n", i, reverse[i]);
    }
}