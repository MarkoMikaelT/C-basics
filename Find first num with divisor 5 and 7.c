#include <stdio.h>

void main()
{
    int alar, ylar;
    int k;

    printf("Etsin luvun, joka on jaollinen 5:ll\x84 ja 7:ll\x84 antamasta alueestasi. \n");

    printf("Anna alueen alaraja:");
    scanf("%i", &alar);

    printf("Anna alueen yl\x84raja:");
    scanf("%i", &ylar);

    for(k = alar; k <= ylar; k++)
    {
        if(k % 5 == 0 && k % 7 == 0)
        {
            printf("Luku %i on jaollinen 5:ll\x84 ja 7:ll\x84. \n", k);
            printf("Luku havaittu! Haku lopetetaan.");
            break;
        }
        else if(k % 5 != 0)
        {
            printf("Luku %i ei ole jaollinen 5:ll\x84, hyl\x84t\x84\x84n. \n", k);
            continue;
        }
        else if(k % 7 != 0)
        {
            printf("Luku %i ei ole jaollinen 7:ll\x84, hyl\x84t\x84\x84n. \n", k);
            continue;
        }
    }
}
