
#include "menu.h"
#include "mode_jeu.h"
#include "QuestionsReponses.h"
#include "Structures.h"
#include "JeuMulti.h"
//#include"player.h"

int main()
{
    Joueur Joueur1, Joueur2, Joueur3;
    InitialiseJoueur(Joueur1, Joueur2, Joueur3);
    menu(Joueur1, Joueur2, Joueur3);
}