#include "menu.h"
#include "mode_jeu.h"
#include "Structures.h"
#include "JeuMulti.h"

void menu(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3)
{
    int choix5 = 0;
    int choix4 = 0;
    //int choixjoueur = 0;
    int choix1 = 0;
    int choix2 = 0;

    for (;;)
    {
        printf("\t\t\t\t\t\t JEU DE PORTES\n");
        printf("\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");

        printf("   I/ Solo \n   II/ Multijoueurs \n   III/ Quitter \n");
        scanf("%d", &choix1);
        if (choix1 == 1) // MODE SOLO
        {
            for (;;)
            {
                printf("   I/ Facile \n   II/ Difficile \n   III/ Retour \n");
                scanf("%d", &choix2);
                if (choix2 == 1) // MODE FACILE DU SOLO
                {
                    printf("\n");
                    for (;;)
                    {
                        printf("I] AFFICHER LES SCORES\nII] JOUER\nIII] RETOUR\n");
                        scanf("%d", &choix4);
                        printf("\n");
                        if (choix4 == 1)
                        {
                            for (;;)
                            {
                                affichejoueur(Joueur1, Joueur2, Joueur3);
                                printf("\n\n1] RETOUR\n");
                                scanf("%d", &choix5);
                                if (choix5 == 1)
                                {
                                    break;
                                }
                                else
                                {
                                    printf("IMPOSSIBLE\n\n");
                                }
                            }
                        }
                        else if (choix4 == 2)
                        {
                            jeufacile();
                        }
                        else if (choix4 == 3)
                        {
                            break;
                        }
                        else
                        {
                            printf("IMPOSSIBLE\n");
                        }
                    }
                }
                else if (choix2 == 2)
                {
                    printf("\n");
                    for (;;)
                    {
                        printf("I] AFFICHER LES SCORES\nII] JOUER\nIII] RETOUR\n");
                        scanf("%d", &choix4);
                        printf("\n");
                        if (choix4 == 1)
                        {
                            for (;;)
                            {
                                affichejoueur(Joueur1, Joueur2, Joueur3);
                                printf("\n\n1] RETOUR\n");
                                scanf("%d", &choix5);
                                if (choix5 == 1)
                                {
                                    break;
                                }
                                else
                                {
                                    printf("IMPOSSIBLE\n\n");
                                }
                            }
                        }
                        else if (choix4 == 2)
                        {
                            jeudifficile();
                        }
                        else if (choix4 == 3)
                        {
                            break;
                        }
                        else
                        {
                            printf("IMPOSSIBLE\n");
                        }
                    }
                }
                else if (choix2 == 3)
                {
                    choix1 = 0;
                    choix2 = 0;
                    break;
                }
            }
        }
        else if (choix1 == 2)
        {
            JeuMulti();
        }
        else if (choix1 == 3)
        {
            break;
        }
    }
}
/*
#include "menu.h"
#include "mode_jeu.h"

void menu()
{

    int choix1 = 0;
    int choix2 = 0;
    int choix3 = 0;

    for (; choix1 != 3;)
    {
        printf("\t\t\t\t\t\t\t JEU DE PORTES\n");
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
                    jeudifficile();
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
                    for (; choix3 != 3;)
                    {
                        printf("\t\t\t   1.LANCER LA PARTIE  \n\t\t\t   2.AFFICHER LES SCORES  \n\t\t\t   3.RETOUR\n\n");
                        scanf("%d", &choix3);
                        if (choix3 = 1)
                        {
                            jeufacile();
                            break;
                        }
                        else if (choix3 == 2) // MODE DIFFICILE DU MULTIJOUEUR
                        {
                            printf("hello"); // FONCTION AFFICHE SCORE ICI
                            break;
                        }
                        else if (choix3 == 3) // RETOUR AU CHOIX DU SOLO ou MULTIJOUEUR ou QUITTER
                        {
                            choix1 = 0;
                            choix2 = 0;
                            choix3 = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
}
*/