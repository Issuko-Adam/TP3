#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char prenom[69];
    int temp = 0;
    int somme = 0;

    printf("Saisissez votre quoicouprenom: ");
    scanf("%s", &prenom);

    for (int i = 0; i < strlen(prenom); i++)
    {
        temp += toupper(prenom[i]) - 64;
    }

    printf("temp est: %d \n", temp);

    while (temp > 10)
    {
        while (temp != 0)
        {
            somme += temp % 10;
            temp /= 10;
        }
        temp = somme;
        somme = 0;
    }
    
    printf("Votre nombre magique est: %d", temp);  
    return 0;
}
