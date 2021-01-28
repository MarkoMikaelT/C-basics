#include <stdio.h>

float summa(float l1, float l2);        //1 a
float erotus(float l1, float l2);       //2 b
float tulo(float l1, float l2);         //3 c
float osamaara(float l1, float l2);     //4 d
                                        //f = error
void main()
{
    float l1, l2;
    float a, b, c, d, f;
    int lasku;

    printf("Anna kaksi lukua:");
    scanf("%f %f", &l1, &l2);

    printf("Summa (a+b):1 \n");
    printf("Erotus (a-b):2 \n");
    printf("Tulo (a*b):3 \n");
    printf("Osamaara (a/b):4 \n");

    printf("Valitse haluamaasi laskua vastaava numero:");
    scanf("%i", &lasku);

    switch(lasku)
    {
    case 1:
        a = summa(l1, l2);
        printf("Summa on %.2f", a);
        break;
    case 2:
        b = erotus(l1, l2);
        printf("Erotus on %.2f", b);
        break;
    case 3:
        c = tulo(l1, l2);
        printf("Tulo on %.2f", c);
        break;
    case 4:
        if(l2 == 0)
        {
            printf("ERROR! EI VASTAUSTA!");
            break;
        }
        d = osamaara(l1, l2);
        printf("Osamaara on %.2f", d);
        break;
    }
}

float summa(float l1, float l2)
{
    float sum = l1 + l2;
    return sum;
}

float erotus(float l1, float l2)
{
    float ero = l1 - l2;
    return ero;
}

float tulo(float l1, float l2)
{
    float tulo = l1 * l2;
    return tulo;
}

float osamaara(float l1, float l2)
{
    float jako = l1 / l2;
    return jako;
}
