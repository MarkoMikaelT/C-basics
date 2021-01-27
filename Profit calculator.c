#include <stdio.h>

float laske_tuotto(int taulu[], int koko, float menot);
float tulo_per(float tuotto, int koko);

void main()
{
    int koko, taulu[koko];
    float tuotto;
    float menot;

    printf("Anna opiskelijoiden m\x84\x84r\x84:");
    scanf("%i", &koko);

    printf("Karkkipusseihin kuluneet varat: ");
    scanf("%f", &menot);

    tuotto = laske_tuotto(taulu, koko, menot);

    tulo_per(tuotto, koko);

}
float laske_tuotto(int taulu[], int koko, float menot)
{
    float sum, tulo, tuotto;
    float tuloPer;
    int k = 0;

    for(int i = 0; i < koko; i++)
    {
        printf("Oppilaan %i. myyntitulo:", i+1);
        scanf("%f", &tulo);

        if(tulo < 10) {
            k++;
        }
        sum += tulo;
        tuotto = sum - menot;
    }
    printf("Alle 10 euroa tuottaneita oli: %i \n", k);
    printf("Saatu kokonaistuotto on %.2f euroa", tuotto);
    return tuotto;
}

float tulo_per(float tuotto, int koko) {
    float tuloPer;

    tuloPer = tuotto / koko;
    printf("\n Jokainen opiskelija saa n. %.2f euroa", tuloPer);
}
