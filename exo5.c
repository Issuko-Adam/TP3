#include <stdio.h>
#include <math.h>

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
    int somme = 0;
    int nbetudiant = 0;
    float moyenne;
    Etudiant difference;

    for (int i = 0; i < NB_ETUDIANTS_MAX; i++){
        printf("Saisir un nom: ");
        scanf("%s", &etudiants[i].nom);
        printf("Saisir une taille: ");
        scanf("%u", &etudiants[i].taille);
        
        if (etudiants[i].taille == 0){
            break;
        }

        somme += etudiants[i].taille;
        nbetudiant++; 
    }

    nain = geant = difference = etudiants[0];
    moyenne = somme / nbetudiant;

    for (int i = 0; i < NB_ETUDIANTS_MAX; i++){

         if (etudiants[i].taille == 0){
            break;
        }
        if (geant.taille < etudiants[i].taille){
            geant = etudiants[i];
        }
        if (nain.taille > etudiants[i].taille){
            nain = etudiants[i];
        }
        
        if (fabs(difference.taille - moyenne) > fabs(etudiants[i].taille - moyenne)){
            difference = etudiants[i];
        }
        
    }

    printf("Nain = %s \n", nain.nom);
    printf("Geant = %s", geant.nom);
    printf("Etudiant le plus proche de la moyenne = %s", difference.nom);
}



