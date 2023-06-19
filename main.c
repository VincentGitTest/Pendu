#include <stdio.h>
#include <stdlib.h>

#include "interfaceUtilisateur.h"
#include "dictionnaire.h"
#include "process.h"

int main()
{
    int MAX_SIZE = 25;

    bool keepPlaying = true;

    while(keepPlaying==true)
    {
        int erreurs = 0;
        int partie = 0;
        int size = 0;

        char* mot = demandeMot();

        while (mot[size] != '\0') {
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
