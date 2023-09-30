#include <stdio.h>


int main()
{
    enum { LONGUEUR_MAX = 30 , NB_ETUDIANTS_MAX = 20 };
    typedef struct {
        char nom[ LONGUEUR_MAX ];
        unsigned int taille ; // (en cm)
    } Etudiant ;
    Etudiant nain;
    Etudiant geant;
    Etudiant etudiants[NB_ETUDIANTS_MAX];

    for (int i = 0; i < NB_ETUDIANTS_MAX; i++){
        printf("Saisir un nom: ");
        scanf("%s", &etudiants[i].nom);
        printf("Saisir une taille: ");
        scanf("%u", &etudiants[i].taille);

        if (etudiants[i].taille == 0){
            break;
        }
        
    }

    nain = geant = etudiants[0];

    for (int i = 0; i < NB_ETUDIANTS_MAX; i++){

         if (etudiants[i].taille == 0){
            break;
        }

        if (geant.taille < etudiants[i].taille)
        {
            geant = etudiants[i];
        }
        if (nain.taille > etudiants[i].taille)
        {
            nain = etudiants[i];
        }
        
        
    }

    printf("Nain = %s \n", nain.nom);
    printf("Geant = %s", geant.nom);
}



