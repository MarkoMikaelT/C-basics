#include <stdio.h>
#include <string.h>

int laskeEsiintymiskerrat(char merkki[], char lause[]);
void userinput(char merkki[], char lause[]);

void main()
{
    char merkki[0];
    char lause[100];
    int tulos;

    userinput(merkki, lause);

    tulos = laskeEsiintymiskerrat(merkki, lause);

    printf("Annettu merkki esiintyy lauseessa %i. kertaa.", tulos);
}
void userinput(char merkki[], char lause[])
{
    printf("Kirjoita lause (MAX 100 merkki\x84):");
    gets(lause);

    printf("Anna haettava merkki:");
    gets(merkki);
}
int laskeEsiintymiskerrat(char merkki[], char lause[])
{
    int i = 0;
    int sum_merkki = 0;
    int pituus = strlen(lause);

    for(i = 0; i < pituus; i++)
    {
        if(lause[i] == merkki[0])
        {
            sum_merkki++;
        }
    }
    return sum_merkki;
}
