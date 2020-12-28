#include "Menu.h"
#include "ModeJeu.h"
#include "JeuMulti.h"



void menu(){
    int choix5=0;
    int choix4=0;
    //int choixjoueur=0;
    int choix1=0;
    int choix2=0;
    for(;;){
        printf("\n\n");
        printf("\t\t\t\t\t\t   ---JEU DE PORTES--- \n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf ("\n\n");
        printf ("   I/ Solo \n   II/ Multijoueurs \n   III/ Quitter \n\n");
        scanf ("%d", &choix1);
        printf ("\n");
        if (choix1==1){
            for (;;){
                printf ("   I/ Facile \n   II/ Difficile \n   III/ Retour \n");
                scanf ("%d", &choix2);
                if (choix2==1){
                    printf ("\n");
                    for (;;){
                        printf ("I] AFFICHER LES SCORES\nII] JOUER\nIII] RETOUR\n");
                        scanf ("%d", &choix4);
                        printf ("\n");
                        if (choix4==1){
                            for ( ; ;){
                                affichejoueurfacile();
                                printf ("\n\n1] RETOUR\n");
                                scanf ("%d", &choix5);
                                if (choix5==1){
                                    break;
                                } else { printf("IMPOSSIBLE\n\n"); }
                            }
                        } else if (choix4==2){
                            jeufacile();
                        } else if (choix4==3){
                            break;
                        } else {printf ("IMPOSSIBLE\n");}
                    }
                } else if (choix2==2){
                    printf ("\n");
                    for (;;){
                        printf ("I] AFFICHER LES SCORES\nII] JOUER\nIII] RETOUR\n");
                        scanf ("%d", &choix4);
                        printf ("\n");
                        if (choix4==1){
                            for ( ; ;){
                                affichejoueurdifficile();
                                printf ("\n\n1] RETOUR\n");
                                scanf ("%d", &choix5);
                                if (choix5==1){
                                    break;
                                } else { printf("IMPOSSIBLE\n\n"); }
                            }
                        } else if (choix4==2){
                            jeudifficile();
                        } else if (choix4==3){
                            break;
                        } else {printf ("IMPOSSIBLE\n");}
                    }
                } else if (choix2==3){
                    choix1=0;
                    choix2=0;
                    break;
                }
            }
        } else if (choix1==2){
            JeuMulti();
        } else if (choix1==3){
            break;
        }
    }
}
