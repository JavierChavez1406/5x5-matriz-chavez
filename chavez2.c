#include <stdio.h>

int main() {
    int chavez;

    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &chavez);

    int matriz[chavez][chavez]; 

 
    for (int i = 0; i < chavez; i++) {
        for (int j = 0; j < chavez; j++) {
            if (i == j) {
                matriz[i][j] = 1;  
            } else {
                matriz[i][j] = 0; 
            }
        }
    }

    
    printf("\nMatriz %dx%d:\n", chavez, chavez);
    for (int i = 0; i < chavez; i++) {
        for (int j = 0; j < chavez; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

