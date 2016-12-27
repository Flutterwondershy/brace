#include "brace.h"

int brace(char string[], char o, char c) //o -> open; c -> close
{
    int i=0;
    int temoin=0;
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == o) temoin++;
        if(string[i] == c) temoin--;
        if(temoin<0) return 0; //à aucun moment, on doit fermer plus qu'on ouvre
    }

    return temoin == 0;
}
