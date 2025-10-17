#include <stdio.h>

int main() {
    int chavez[5][5];
for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            chavez[i][j] = 0;
        }
    }
for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", chavez[i][j]);
        }
        printf("\n"); 
    }
}
