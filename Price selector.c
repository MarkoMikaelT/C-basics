#include <stdio.h>
#include <string.h>

struct phone{
    char puhelin[30];
    int hinta;
};
void testaus(struct phone p[], int min, int max);

void main(){
    struct phone p[5] = {
    {"Nokia 3310", 99},
    {"Oneplus 4", 199},
    {"Huawei P90", 299},
    {"Samsung A6", 399},
    {"Xiaomi Mi 10", 499}};

    int min, max;

    printf("Anna hinta alueesi. \n");
    printf("Minimi:");
    scanf("%i", &min);
    printf("Maksimi:");
    scanf("%i", &max);

    testaus(p, min, max);
}

void testaus(struct phone p[], int min, int max){
    int i;

    printf("Suosituksia:");
    for(i = 0; i < 5; i++){
        if(p[i].hinta < max && p[i].hinta > min){
            printf(" %s, ", p[i].puhelin);
        }
        else if(p[i].hinta == max || p[i].hinta == min){
             printf(" %s, ", p[i].puhelin);
        }
        else{
            continue;
        }
    }
}
