#include <stdio.h>

int main(int argc, char const *argv[])
{
    enum {DECALAGE = 2};
    char before[69];
    char after[69];
    char temp;

    printf("Entrez votre chaine");
    scanf("%s", &before);

    for (int i = 0; before[i] != '\0'; i++){

        temp = before[i];
        for (int j = 0; j < DECALAGE; j++){
            temp++;
            //90 = Z majuscule
            if (temp == 91 ){       
                temp = 'A';
            }
            //122 = z minuscule 
            else if (temp == 123) 
            {
                temp = 'a';
            } 
        }
        after[i] = temp;  
        after[i + 1] = '\0';
    }
    printf("La chaine cryptee est: %s", after);
    return 0;
}
