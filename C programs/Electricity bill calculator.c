#include <stdio.h>

void main() {
    float psah;
    float ysah;
    float phin;
    float yhin;
    float pmaksu, ymaksu, yht;
    float pinta, yhtsah, kulutus;
    float yli, ali;
    int i;

    while(i = 1) {
    printf("Kulunut paivasahko vuodessa (kwh):");
    scanf("%f", &psah);
    printf("Paivasahkon hinta (sent):");
    scanf("%f", &phin);

    printf("Kulunut yosahko vuodessa (kwh):");
    scanf("%f", &ysah);
    printf("Yosahkon hinta (sent):");
    scanf("%f", &yhin);

    pmaksu = (psah / 100) * phin;
    ymaksu = (ysah / 100) * yhin;

    yht = pmaksu + ymaksu;

    printf("Paiva kulutuksen maksu on: %.2f euroa \n", pmaksu);
    printf("Yo kulutuksen maksu on: %.2f euroa \n", ymaksu);
    printf("Yhteensa kulutuksen maksu on: %.2f euroa \n", yht);

    printf("Talon pinta-ala (m^2):");
    scanf("%f", &pinta);

    yhtsah = psah + ysah;
    kulutus = yhtsah / pinta;
    printf("Kulutus per neliometri: %.2f ", kulutus);

    yli = 200 * 1.7;
    ali = 200 * 0.3;

    if(kulutus > yli || kulutus < ali) {
        printf("Virhe! \n");
    }
    else if(kulutus > 200.0) {
        printf(" !Kulutus on yli keskiarvion!");
        break;
    }
    else if(kulutus < 200.0) {
        printf(" !Kulutus on alle keskiarvion!");
        break;
    }
}

}
