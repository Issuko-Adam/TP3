#include <string.h>
#include <stdio.h>


int main()
{
    char chaine[69];

    printf("Saisir la chaine: ");
    scanf("%s", chaine);
    printf("'%s' taille de la chaine: %zd, taille en mémoire de la chaine: %zd ", chaine, strlen(chaine), sizeof(chaine));
    return 0;
}
