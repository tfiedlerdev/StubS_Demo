#include <stdio.h>

void zeichneBaumkrone(int groesse) {
    
}

void zeichneBaumstamm(int groesse) {
     for(int i = 0; i < groesse/2; i++) {
          for(int j = 0; j < groesse- groesse/5+1; j++) {
                printf(" ");
          }
          printf("#");
         for(int j = 1; j < groesse/5; j++) {
                printf("#");
          } 
        printf("\n");
    }
}

int main(void) {
    int groesse = 11;
    zeichneBaumkrone(groesse);
    zeichneBaumstamm(groesse);
    return 0;
}