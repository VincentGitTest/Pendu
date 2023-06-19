#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "interfaceUtilisateur.h"


// Cette fonction affiche la pendule
void affichePendul(char pendu[], int erreurs, int partie)
{
    char* hangman[] = {
        "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n"
    };
    if(partie == 0)
    {
        printf("La partie continue :\n");
        printf("Vous avez fait %d erreur(s).\n",erreurs);
        printf("%s\n",hangman[erreurs]);
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


