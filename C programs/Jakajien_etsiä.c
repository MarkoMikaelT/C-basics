#include <stdio.h>

void main() {

    int luku, vast = 0, vast2 = 0;

    printf("Anna luku:");
    scanf("%i", &luku);

    int k = 0;

    for(k = 1; k <= luku; k++) {

        vast = luku  % k;

        if(vast == 0){
            printf("%i \n", k);
        }
    }

}
