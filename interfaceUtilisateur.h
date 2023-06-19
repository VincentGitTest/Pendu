#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void affichePendul(char pendu[], int erreur, int partie)
{
    if(partie == 0)
    {
        printf("La partie continue :\n");
        printf("Vous avez fait %d erreur(s).\n",erreur);
        printf("Voici le mot avec les lettres qui manquent : \n");
        printf("%s\n",pendu);
    }
    else if (partie == -1)
    {
        printf("Defaite : tu as fait trop d'erreurs.\n");
    }
    else if (partie == 1)
    {
        printf("Victoire : tu as trouve le mot.\n");
    }
}

char demandeLettre()
{
    char lettre;
    printf("Donner moi une lettre : \n");
    scanf("%c", &lettre);
    return lettre;
}

