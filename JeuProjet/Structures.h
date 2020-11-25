
#if 0
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
    char prenom;
    int point;
};

struct Partie
{
    int temps;
    int pénalité;
};

#endif // STRUCTURES_H_INCLUDED

#define STRUCTURES_H_INCLUDED
#endif