#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "interfaceUtilisateur.h"
#include "dictionnaire.h"
#include "process.h"

int main()
{
    int erreurs; //nombre d'erreurs de l'utilisateur
    int partie;  //0 si la partie continue, -1 d�faite, 1 victoire
    int size;  //taille du mot

    bool keepPlaying = true;

    char* mot;

    while(keepPlaying)
    {
        erreurs = 0;
        partie = 0;
        size = 0;

        mot = demandeMot();  //r�cup�ration du mot dans le dictionnaire

        while (*mot[size] != '\0') {  //d�termaination de la taille du mot
            size++;
        }


        char pendu[size] = {'_'};   //cr�ation d'une chaine de caract�res de la longueur du mot avec '_' comme valeur initiale

        while(partie == 0)
        {
            char lettre = demandeLettre();   //demande une lettre � l'utilisateur
            partie = compareMot(lettre, mot, &pendu, &erreurs, size);   //modifie le nombre d'erreurs, et le pendu accord�ment
            afficherPendu(pendu, erreurs, partie);  //affiche les informations n�cessaires au joueur
        }
        free(mot)  //gestion m�moire
        free(pendu)
        //keepPlaying = demandeContinuer();
    }
    return 0;
}
