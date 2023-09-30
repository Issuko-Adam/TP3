#include <stdio.h>
#include <assert.h>
int main(){
    enum {TAILLE_TABLEAU = 5};
    int tableau[TAILLE_TABLEAU] = {10, 20, 30, 40, 50};
    int reverse[TAILLE_TABLEAU];

    for (int i = 0; i < TAILLE_TABLEAU / 2; i++){
        int a = tableau[i]; 
        tableau[i] = tableau[TAILLE_TABLEAU - 1 - 1];
        tableau[TAILLE_TABLEAU] = a;

    }
    
    for (int i = 0; i < TAILLE_TABLEAU; i++){
        reverse[TAILLE_TABLEAU - 1 - i] = tableau[i];
        assert(tableau [i] == reverse[i]);
    }

    


}