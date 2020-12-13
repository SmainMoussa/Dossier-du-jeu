#include "JeuMulti.h"

void JeuMulti()
{

    clock_t chrono1 = 0, chrono2 = 0;
    int choix;
    char prenom1[50];
    char prenom2[50];
    printf("Prenom joueur 1 : ");
    scanf("%s", prenom1);
    printf("Prenom joueur 2 : ");
    scanf("%s", prenom2);
    printf("\n");
    for (;;)
    {
        printf("I/ Jouer\nII/ Quitter\n");
        scanf("%d", &choix);
        printf("\n");
        if (choix == 1)
        {
            printf("A %s de jouer !", prenom1);
            printf("\n");
            for (int i = 3; i > 0; i--)
            {
                printf("%d", i);
                printf("\n");
                Sleep(1000);
            }
            printf("\n");
            chrono1 = jeufacile();
            printf("\n");
            printf("%s doit battre %f secondes", prenom2, (double)chrono1 / CLOCKS_PER_SEC);
            printf("\n\n");
            printf("A %s de jouer !", prenom2);
            printf("\n");
            for (int i = 3; i > 0; i--)
            {
                printf("%d", i);
                printf("\n");
                Sleep(1000);
            }
            printf("\n");
            chrono2 = jeufacile();
            printf("\n");
            if (chrono1 < chrono2)
            {
                printf("%s gagne la partie!!\n\n", prenom1);
            }
            else if (chrono1 > chrono2)
            {
                printf("%s gagne la partie!!\n\n", prenom2);
            }
            else if (chrono1 == chrono2)
            {
                printf("Egalite!!\n\n");
            }
        }
        else if (choix == 2)
        {
            break;
        }
        else
        {
            printf("IMPOSSIBLE");
        }
    }
}

//srand( (unsigned)time( NULL ) );
