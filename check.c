#include <stdio.h>
#include <stdlib.h>


// Fonction de verification pour le pendu
int checkword(char word[50], char *result, int *errors, char guess)
{

    //Taille du mot � chercher
    int size = sizeof(word)-1;

    // D�finition de la liste temporaire
    char tempresult [256];


    // V�rification sur la lettre entr�e est adns le mot
    if (strchr(word, guess)>0)
    {
        // V�rification de quelle lettre est dans le mot
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
        //Assignation de la liste temporaire � la liste point�e
        result = tempresult;

    }
    // Erreur si la lettre n'est pas dans le mot
    else
    {
        errors++;

    }

    // D�faite si il y a 6 erreurs
    if(errors == 6)
    {
        return -1;
    }

    // Victoire si le mot entier est trouv�
    else if (strchr(result, '_')>0)
    {
        return 1;
    }


    // Continuer si ni victoire ni d�faite

    return 0;


    }
