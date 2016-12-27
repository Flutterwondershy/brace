#include <stdio.h>
#include <stdlib.h>
#include "brace.h"

int main(int argc, char* argv[])
{
    char ouvrante = '(';
    char fermante = ')';
    char* chaine;

    
    if(argc < 2)
    {
		fprintf(stderr, "Nombre d'arguments insuffisants");
		return -1;
    }
    else
    {
		if(argc > 3)
		{
			ouvrante = argv[1][0];
			fermante = argv[2][0];
		}

		chaine = argv[argc-1];
		printf("%d\n", brace(chaine, ouvrante, fermante));
    }


    return 0;
}
