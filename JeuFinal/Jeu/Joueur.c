#include "Joueur.h"

/*void InitialiseJoueur(Joueur Joueur1, Joueur Joueur2, Joueur Joueur3)
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
}*/

void affichejoueurfacile (){
    Joueur Joueur1, Joueur2, Joueur3;
    FILE *fichier=NULL;
    long score[3]={0};
    char nom[3][50]={};
    fichier= fopen("MeilleursScoreFacile.txt", "r");
    if (fichier != NULL)
    {
        for (int i=1; i<=2; i++){
            if (i==1){
                fscanf(fichier, "%ld %ld %ld", &score[0], &score[1], &score[2]);
            } else if (i==2) {
                fscanf(fichier, "%s %s %s", &nom[0], &nom[1], &nom[2]);
            }
        }
    }
    fclose(fichier);
    Joueur1.nom=nom[0];
    Joueur2.nom=nom[1];
    Joueur3.nom=nom[2];
    Joueur1.chrono=score[0];
    Joueur2.chrono=score[1];
    Joueur3.chrono=score[2];
    printf ("I] Joueur: %s\n   Chrono: %f s\n", Joueur1.nom,(double)Joueur1.chrono/CLOCKS_PER_SEC);
    printf ("\n\n");
    printf ("II] Joueur: %s\n    Chrono: %f s\n", Joueur2.nom,(double)Joueur2.chrono/CLOCKS_PER_SEC);
    printf ("\n\n");
    printf ("III] Joueur: %s\n     Chrono: %f s\n", Joueur3.nom,(double)Joueur3.chrono/CLOCKS_PER_SEC);
}


void affichejoueurdifficile (){
    Joueur Joueur1, Joueur2, Joueur3;
    FILE *fichier=NULL;
    long score[3]={0};
    char nom[3][50]={};
    fichier= fopen("MeilleursScoreDifficile.txt", "r");
    if (fichier != NULL)
    {
        for (int i=1; i<=2; i++){
            if (i==1){
                fscanf(fichier, "%ld %ld %ld", &score[0], &score[1], &score[2]);
            } else if (i==2) {
                fscanf(fichier, "%s %s %s", &nom[0], &nom[1], &nom[2]);
            }
        }
    }
    fclose(fichier);
    Joueur1.nom=nom[0];
    Joueur2.nom=nom[1];
    Joueur3.nom=nom[2];
    Joueur1.chrono=score[0];
    Joueur2.chrono=score[1];
    Joueur3.chrono=score[2];
    printf ("I] Joueur: %s\n   Chrono: %f s\n", Joueur1.nom,(double)Joueur1.chrono/CLOCKS_PER_SEC);
    printf ("\n\n");
    printf ("II] Joueur: %s\n    Chrono: %f s\n", Joueur2.nom,(double)Joueur2.chrono/CLOCKS_PER_SEC);
    printf ("\n\n");
    printf ("III] Joueur: %s\n     Chrono: %f s\n", Joueur3.nom,(double)Joueur3.chrono/CLOCKS_PER_SEC);
}
/*void ChoixJoueur (Joueur Joueur1, Joueur Joueur2, Joueur Joueur3){
    int choix;
    scanf ("%d", &choix);
    if (choix==1){
        scanf("%s", Joueur1.nom);
        scanf("%d", Joueur1.chrono);
        scanf("%d", Joueur1.penalite);
    } else if (choix==2){
        scanf("%s", Joueur2.nom);
        scanf("%d", Joueur2.chrono);
        scanf("%d", Joueur2.penalite);
    } else if (choix==3){
        scanf("%s", Joueur3.nom);
        scanf("%d", Joueur3.chrono);
        scanf("%d", Joueur3.penalite);
    }
}*/
