#if 0
#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

#include <time.h>

typedef struct Partie partie;
typedef struct Joueur joueur;

extern struct Joueur
{
    char nom;
    char prenom;
    int age;
    int genre; // un booleen 1 = garçon, 0 = fille
};

extern struct Partie
{
    int point;
    int temps;
    int pénalité;
};

#endif // STRUCTURES_H_INCLUDED

#define STRUCTURES_H_INCLUDED
#endif