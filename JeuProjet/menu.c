#include "menu.h"
#include "mode_jeu.h"

void menu()
{

    int choix1 = 0;
    int choix2 = 0;

    for (; choix1 != 3;)
    {
        printf("\t\t\t\t\t\t JEU DE PORTES\n");
        printf("\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");

        printf("   I/ Solo \n   II/ Multijoueurs \n   III/ Quitter \n");
        scanf("%d", &choix1);
        if (choix1 == 1) // MODE SOLO
        {
            for (; choix2 != 3;)
            {
                printf("   I/ Facile \n   II/ Difficile \n   III/ Retour \n");
                scanf("%d", &choix2);
                if (choix2 == 1) // MODE FACILE DU SOLO
                {
                    jeufacile();
                    break;
                }
                else if (choix2 == 2) // MODE DIFFICILE DU SOLO
                {
                    jeufacile();
                    break;
                }
                else if (choix2 == 3) // RETOUR AU CHOIX DU SOLO ou MULTIJOUEUR ou QUITTER
                {
                    choix1 = 0;
                    choix2 = 0;
                    break;
                }
            }
        }
        else if (choix1 == 2) // Multijoueurs
        {
            for (; choix2 != 3;)
            {
                printf("   I/ Facile \n   II/ Difficile \n   III/ Retour \n");
                scanf("%d", &choix2);
                if (choix2 == 1) // MODE FACILE DU MULTIJOUEUR
                {
                    jeufacile();
                    break;
                }
                else if (choix2 == 2) // MODE DIFFICILE DU MULTIJOUEUR
                {
                    jeufacile();
                    break;
                }
                else if (choix2 == 3) // RETOUR AU CHOIX DU SOLO ou MULTIJOUEUR ou QUITTER
                {
                    choix1 = 0;
                    choix2 = 0;
                    break;
                }
            }
        }
    }
}