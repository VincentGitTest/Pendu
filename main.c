#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "interfaceUtilisateur.h"
#include "dictionnaire.h"
#include "process.h"

int main()
{
    int MAX_SIZE = 25;

    int erreurs;
    int partie;
    int size;

    bool keepPlaying = true;

    char* mot;

    while(keepPlaying)
    {
        erreurs = 0;
        partie = 0;
        size = 0;

        mot = demandeMot();

        while (*mot[size] != '\0') {
            size++;
        }


        char pendu[size] = {'_'};

        while(partie == 0)
        {
            char lettre = demandeLettre();
            partie = compareMot(lettre, mot, &pendu, &erreurs, size);
            afficherPendu(&pendu, erreurs, partie, size);
        }
        //bool keepPlaying = demandeContinuer();
    }
    return 0;
}
