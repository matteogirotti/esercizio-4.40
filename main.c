#include <stdio.h>

int main(void) {
    int lunghezza,i,j;
    printf("Inserisci la lunghezza del lato del quadrato: ");
    scanf("%d", &lunghezza);
    for (i = 0; i < lunghezza; i++) {
        for (j = 0; j < lunghezza; j++) {
            if (i == 0 || i == lunghezza - 1 || j == 0 || j == lunghezza - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
