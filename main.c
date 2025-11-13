
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    /* Créer un tableau pour marquer les nombres premiers*/
    bool nbPremier[n+1];

    /*Initialisation : on suppose que tous les nombres sont premiers*/
    for (int i = 0; i <= n; i++) {
        nbPremier[i] = true;
    }

    nbPremier[0] = nbPremier[1] = false; /* 0 et 1 ne sont pas premiers*/

    for (int i = 2; i * i <= n; i++) {
        if (nbPremier[i]) {
            for (int j = i * i; j <= n; j += i) {
                nbPremier[j] = false; /* Marquer les multiples comme non premiers*/
            }
        }
    }

    /* Affichage des nombres premiers*/
    printf("LES nombres premiers jusqu'à %d :\n", n);
    for (int i = 2; i <= n; i++) {
        if (nbPremier[i]) {
            printf("%d ", i);
        }
    }

    return 0;}
