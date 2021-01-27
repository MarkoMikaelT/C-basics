#include <stdio.h>
#include <string.h>

struct Tilitiedot{
    const char tunnus[5];
    const char salasana[5];
    const char nimi[50];
    float saldo;
};
void Login(struct Tilitiedot T[]);
void menu(struct Tilitiedot T[], int i);

void main() {
    struct Tilitiedot T[5] = {
    {"1234", "1111", "Johannes Kary", 1203.0},
    {"5678", "2222", "Petteri Kuono", 10300.23},
    {"9101", "3333", "Aleksi Tuomo", 300.10},
    {"1001", "4444", "Juha Nuomo", 56431.45},
    {"0101", "5555", "Max Miljonare", 99999.99}
    };

    Login(T);
}
void Login(struct Tilitiedot T[]) {

    char INtunnus[5];
    char INsalasana[5];

    printf("K\x84ytt\x84j\x84tunnus:");
    scanf("%s", &INtunnus);

    printf("Salasana:");
    scanf("%s", &INsalasana);

    if(strcmp("0", INtunnus) == 0 && strcmp("0", INsalasana) == 0) { //LOPETTAA OHJELMAN!!! jos on kerran kirjauduttu toimii toisella kerralla
            return;
        }

    for(int i = 0; i < 5; i++) {
        if(strcmp(T[i].tunnus, INtunnus) == 0 && strcmp(T[i].salasana, INsalasana) == 0) {
                menu(T, i);
        }
    }
    printf("V\x84\x84r\x84 k\x84ytt\x84j\x84tunnus tai salasana! \n");
    Login(T);
}
void menu(struct Tilitiedot T[], int i) {

    int valinta;

    printf("\n");
    printf("1. Tilitietojen katselu\n");
    printf("2. Rahan nosto\n");
    printf("3. Lopeta\n");

    printf("Valitse toiminto:");
    scanf("%i", &valinta);
    printf("\n");

    if(valinta > 3 || valinta < 1) {
        menu(T, i);
    }

    switch(valinta) {
        int sum;

        case 1:
                printf("%s %.2f euroa \n", T[i].nimi, T[i].saldo);
                printf("Paina 0 palataksesi valikkoon:");
                scanf("%i", &sum);
                if(sum == 0) {
                    menu(T, i);
                }
                break;
        case 2:
            uudestaan:
                printf("(Min 20 euroa, Max 500 euroa) \n Nosto summa:");
                scanf("%i", &sum);

                if(sum == 0) {
                    menu(T, i);
                }
                else if(sum % 10 != 0 || sum > T[i].saldo || sum < 20 || sum > 500) {
                    goto uudestaan; //ei pitaisi kayttaa
                }
                else {
                    T[i].saldo = T[i].saldo - sum;
                    printf("Saldo %.2f euroa \n", T[i].saldo);
                    menu(T, i);
                }
                break;
        case 3:
                printf("\n ------------- \n");
                Login(T);
    }
}
