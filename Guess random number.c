#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random();

void main()
{
    int rnum, arv = 0;
    int monesko = 0;

    rnum = random();

    while(arv != rnum)
    {
        monesko++;

        printf("Arvaa luku 1-10:");
        scanf("%i", &arv);
/*
        printf("%i %i", rnum, arv); TESTAMISEEN!!
*/
        if(arv == rnum)
        {
            printf("OIKEIN!!! \n");
            break;
        }
        else
        {
            printf("V\x84\x84rin, yrit\x84 uudestaan. \n");
        }
    }

    printf("Arvasit %i kertaa", monesko);
}

int random()
{
   int random;

   srand(time(NULL));
   random = rand() % 10 + 1;
   return random;
}

