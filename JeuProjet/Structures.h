

#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Partie partie;
typedef struct Joueur joueur;

struct Joueur
{
    char nom;
    int point;
    int penalite;
    int temps;

};

struct Partie
{
    char Questions;
    char Reponses;
};

#endif // STRUCTURES_H_INCLUDED

#define STRUCTURES_H_INCLUDED
