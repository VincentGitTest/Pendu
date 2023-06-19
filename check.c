#include <stdio.h>
#include <stdlib.h>


// Fonction de verification pour le pendu
int checkword(char word[50], char *result, int *errors, char guess)
{

    //Taille du mot à chercher
    int size = sizeof(word)-1;

    // Définition de la liste temporaire
    char tempresult [256];


    // Vérification sur la lettre entrée est adns le mot
    if (strchr(word, guess)>0)
    {
        // Vérification de quelle lettre est dans le mot
        for(int i = 0; i < size; i++)
        {
            if(word[i]==guess)
            {
                if(!(word[i]==result[i]))
                {
                    tempresult[i]= guess;

                }



            }
            else
            {

                tempresult[i] = result[i];

            }
        }
        //Assignation de la liste temporaire à la liste pointée
        result = tempresult;

    }
    // Erreur si la lettre n'est pas dans le mot
    else
    {
        errors++;

    }

    // Défaite si il y a 6 erreurs
    if(errors == 6)
    {
        return -1;
    }

    // Victoire si le mot entier est trouvé
    else if (strchr(result, '_')>0)
    {
        return 1;
    }


    // Continuer si ni victoire ni défaite

    return 0;


    }
