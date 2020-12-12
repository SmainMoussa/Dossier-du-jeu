#include <stdio.h>
#include <stdlib.h>

typedef struct {
char *nom;
int chrono;
int penalite;
}Joueur;

void main(int argc, char *argv[])
{
    Joueur Joueur1, Joueur2, Joueur3;
    InitialiseJoueur(Joueur1,Joueur2,Joueur3);
    menu();
}

