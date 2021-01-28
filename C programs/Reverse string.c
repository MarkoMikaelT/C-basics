#include <stdio.h>
#include <string.h>

void kaanna(char merkit[], int indeksi);

void main()
{
    char merkit[50];

    int pituus = 0;

    printf("Kirjoita sanasi:");
    gets(merkit);

    pituus = strlen(merkit);

    kaanna(merkit, pituus-1);
}
void kaanna(char merkit[], int pituus)
{
    for(int i = pituus ; i >= 0; i--)
    {
        printf("%c", merkit[i]);
    }
}
