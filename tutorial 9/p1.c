#include <stdio.h>

int main() {
    int num;

    printf("Δωσε εναν αριθμο: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Θετικος αριθμος\n");
    } else if (num < 0) {
        printf("Αρνητικος αριθμος\n");
    } else {
        printf("Ειναι μηδεν\n");
    }

    return 0;
}