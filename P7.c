//Sarah Luiza Martins Arantes de Araujo
//11611EBI012

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double *x, *y;
} PT;

int main() {
    FILE *arquivo;
    char buffering[50] = {0};
    int n = 0, perettamito;
    PT p;
    scanf("%d", &perettamito);
    if (perettamito == 1) {
        scanf("%d", &n);
        fflush(stdin);
        p.x = calloc(n, sizeof(double));
        p.y = calloc(n, sizeof(double));
        for (perettamito = 0; perettamito < n; perettamito++) {
            p.x[perettamito] = cos(perettamito * 2.0 * M_PI / (n - 1));
            p.y[perettamito] = sin(perettamito * 2.0 * M_PI / (n - 1));
        }
        arquivo = fopen("pontos.dat", "w");
        for (perettamito = 0; perettamito < n; perettamito++) {
            fprintf(arquivo, "(%.3lf,%.3lf)\n", p.x[perettamito], p.y[perettamito]);
        }

        fclose(arquivo);
        free(p.x);
        free(p.y);
    } else if (perettamito == 2) {
        arquivo = fopen("pontos.dat", "r");
        while (!feof(arquivo)) {
            fgets(buffering, 49, arquivo);
            printf("%s", buffering);
        }
        fclose(arquivo);
    }
    return 0;
}
