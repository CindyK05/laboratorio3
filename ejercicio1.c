#include <stdio.h>

int main() {
        int n;
        printf("Ingrese la cantidad de la matriz cuadrada:");
        scanf("%d",&n);
        int matriz[n][n];
        int suma2=0,suma1=0,i,j;

        for (i = 0; i < n ; i++) {
                 for (j = 0; j < n; j++) {
                         printf ("Ingrese los numeros para armar la matriz:");
                         scanf("%d",&matriz[i][j]);
                 }
        }

        printf("La matriz es de la siguiente manera:\n");
                for (i = 0; i < n ; i++) {
                        for (j = 0; j < n; j++) {
                                printf("%d\t",matriz[i][j]);
                 }
                        printf("\n");
                }
        for (i = 0; i < n ; i++) {
                suma1 += matriz[i][i];
                suma2 += matriz[n-1-i][i];
                 }
        printf ("Suma de la primera diagonal:%d\n", suma1);
        printf ("Suma de la segunda diagonal: %d\n", suma2);

        return 0;

}


