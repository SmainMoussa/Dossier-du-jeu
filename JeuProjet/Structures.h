#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nom[500];
    int chrono;
    int penalite;
} Joueur;

void InitialiseJoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3);
void affichejoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3);
void ChoixJoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3);

/*
struct Partie
{
    char Questions;
    char Reponses;
};
*/

#endif // STRUCTURES_H_INCLUDED

#define STRUCTURES_H_INCLUDED
