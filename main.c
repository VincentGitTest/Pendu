#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "interfaceUtilisateur.h"
#include "dictionnaire/dictionnaire.h"
#include "check.h"

int main()
{
    int erreurs; //nombre d'erreurs de l'utilisateur
    int partie;  //0 si la partie continue, -1 défaite, 1 victoire
    int size;  //taille du mot

    bool keepPlaying = true;

    char* mot;

    while(keepPlaying)
    {
        erreurs = 0;
        partie = 0;
        size = 0;

        mot = demandeMot();  //récupération du mot dans le dictionnaire

        while (*mot[size] != '\0') {  //détermaination de la taille du mot
            size++;
        }


        char* pendu = (char*)calloc(size, sizeof(char));   //création d'une chaine de caractères de la longueur du mot avec '_' comme valeur initiale

        for (int i = 0; i < size; i++)
        {
            pendu[i] = '_';
        }

        while(partie == 0)
        {
            char lettre = demandeLettre();   //demande une lettre à l'utilisateur
            partie = compareMot(mot, pendu, &erreur);   //modifie le nombre d'erreurs, et le pendu accordément
            afficherPendu(pendu, erreurs, partie);  //affiche les informations nécessaires au joueur
        }
        free(pendu);
        //keepPlaying = demandeContinuer();
    }
    return 0;
}
