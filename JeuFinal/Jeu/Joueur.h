#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *nom;
    int chrono;
    int penalite;
} Joueur;

void InitialiseJoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3);

void affichejoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3);

void ChoixJoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3);

#endif // JOUEUR_H_INCLUDED
