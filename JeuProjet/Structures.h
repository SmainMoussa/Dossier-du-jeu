#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

#include <time.h>
struct Joueur
{
    char nom;
    char prenom;
    int age;
    int genre; // un boolean 1 = garçon, 0 = fille
};

struct Partie
{
    int point;
    int temp;
    int pénalité;
};

#endif // STRUCTURES_H_INCLUDED

#define STRUCTURES_H_INCLUDED