#include <stdio.h>
#include <stdlib.h>


//printf("%d",1);

void checkword(char word[], char result[])
{

    int end = 2;
    int error = 0;
    int completed = 0;
    int size = sizeof(word)-1;



    while (end==2)
    {

        printf("Entrez une lettre pour jouer: \n");

        char guess;
        scanf(" %c",&guess);
        char tempresult [256];

        if (strchr(word, guess)>0)
        {
            for(int i = 0; i < size; i++)
            {
                if(word[i]==guess)
                {
                    if(!(word[i]==result[i]))
                    {
                        tempresult[i]= guess;
                        completed++;

                    }



                }
                else
                {
                    tempresult[i] = result[i];

                }
            }
            result = tempresult;

        }
        else
        {
            error++;

        }

        printf("%s\n",result);

        if(error == 6)
        {
            end = -1;
        }
        if(completed == size-1)
        {
            end =1;
        }

    }





}
