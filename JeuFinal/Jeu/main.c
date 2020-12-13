#include "main.h"
#include "QuestionsReponses.h"
#include "Menu.h"
#include "ModeJeu.h"
#include "JeuMulti.h"
#include "Joueur.h"

int main(void)
{
    Joueur Joueur1, Joueur2, Joueur3;
    InitialiseJoueur(Joueur1, Joueur2, Joueur3);
    menu(Joueur1, Joueur2, Joueur3);

    return 0;
}
