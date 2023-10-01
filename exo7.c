#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    enum {DECALAGE = 2};
    char before[69];
    char after[69];
    char temp;

    printf("Entrez votre chaine: ");
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

    
    printf("La chaine cryptee est: %s \n", after);

 for (int i = 0; after[i] != '\0'; i++){

        temp = after[i];
        for (int j = 0; j < DECALAGE; j++){
            temp--;
            //65 = A majuscule
            if (temp == 64 ){       
                temp = 'Z';
            }
            //97 = a minuscule 
            else if (temp == 96) 
            {
                temp = 'z';
            } 
        }
        after[i] = temp;  
    }

    assert(strcmp(before, after) == 0);
    printf("%d", strcmp(before, after));
    return 0;
}
