#include <stdio.h>

void zeichneBaumkrone(int groesse) {
    for(int row = 0; row < groesse; row++) {
        for(int j = row; j < groesse; j++) {
            printf(" ");
        }
        for(int j = 0; j < row; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void zeichneBaumstamm(int groesse) {
    
}

int main(void) {
    int groesse = 11;
    zeichneBaumkrone(groesse);
    zeichneBaumstamm(groesse);
    return 0;
}