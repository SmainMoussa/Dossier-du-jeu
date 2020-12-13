#include "Joueur.h"

void InitialiseJoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3)
{

    Joueur1.nom = "VIDE";
    Joueur1.chrono = 0;
    Joueur1.penalite = 0;

    Joueur2.nom = "VIDE";
    Joueur2.chrono = 0;
    Joueur2.penalite = 0;

    Joueur3.nom = "VIDE";
    Joueur3.chrono = 0;
    Joueur3.penalite = 0;
}

void affichejoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3)
{
    printf("I] Joueur: %s\n   Chrono: %d s\n   Penalite: %d s\n", Joueur1.nom, Joueur1.chrono, Joueur1.penalite);
    printf("\n\n");
    printf("II] Joueur: %s\n    Chrono: %d s\n    Penalite: %d s\n", Joueur2.nom, Joueur2.chrono, Joueur2.penalite);
    printf("\n\n");
    printf("III] Joueur: %s\n     Chrono: %d s\n     Penalite: %d s\n", Joueur3.nom, Joueur3.chrono, Joueur3.penalite);
}

void ChoixJoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3)
{
    int choix;
    scanf("%d", &choix);
    if (choix == 1)
    {
        scanf("%s", Joueur1.nom);
        scanf("%d", &Joueur1.chrono);
        scanf("%d", &Joueur1.penalite);
    }
    else if (choix == 2)
    {
        scanf("%s", Joueur2.nom);
        scanf("%d", &Joueur2.chrono);
        scanf("%d", &Joueur2.penalite);
    }
    else if (choix == 3)
    {
        scanf("%s", Joueur3.nom);
        scanf("%d", &Joueur3.chrono);
        scanf("%d", &Joueur3.penalite);
    }
}
