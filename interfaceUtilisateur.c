#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "interfaceUtilisateur.h"
#include "dictionnaire/dictionnaire.h"

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
    if(partie == 0) // La partie continu
    {
        printf("La partie continue :\n");
        printf("Vous avez fait %d erreur(s).\n",erreurs);
        printf("%s\n",hangman[erreurs]);
        printf("Voici le mot avec les lettres qui manquent : \n");
        printf("%s\n",pendu);
    }
    else if (partie == -1) // La partie est perdue
    {
        printf("Defaite : tu as fait trop d'erreurs.\n");
    }
    else if (partie == 1) // La partie est gagnee
    {
        printf("Victoire : tu as trouve le mot.\n");
    }
}

// Cette fonction permet de demander une lettre
char demandeLettre()
{
    char lettre;
    printf("Donnez moi une lettre : \n");
    scanf("%c", &lettre);
    return lettre;
}

