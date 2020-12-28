#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

clock_t jeufacile (){
    int BonnePorte1,BonnePorte2,BonnePorte3,BonnePorte4,BonnePorte5, temp;
    clock_t chrono,debut,fin;
    int choix=0, penalite=0;
    srand( (unsigned)time( NULL ) );
    BonnePorte1= rand()%5+1;
    BonnePorte2= rand()%5+1;
    BonnePorte3= rand()%5+1;
    BonnePorte4= rand()%5+1;
    BonnePorte5= rand()%5+1;
    debut=clock();
    for (;;){
        printf ("|1|2|3|4|5| Palier 1 \n\n");
        printf ("Choisissez votre porte: ");
        scanf ("%d", &choix);
        printf ("\n");
        if (choix==BonnePorte1){
            temp=QuestionsReponsesfacile();
            if (temp==1){
                printf ("|1|2|3|4|5| Palier 2 \n\n");
                printf ("Choisissez votre porte: ");
                scanf ("%d", &choix);
                printf ("\n");
                if (choix==BonnePorte2){
                    temp=QuestionsReponsesfacile();
                    if (temp==1){
                        printf ("|1|2|3|4|5| Palier 3 \n\n");
                        printf ("Choisissez votre porte: ");
                        scanf ("%d", &choix);
                        printf ("\n");
                        if (choix==BonnePorte3){
                            temp=QuestionsReponsesfacile();
                            if (temp==1){
                                printf ("|1|2|3|4|5| Palier 4 \n\n");
                                printf ("Choisissez votre porte: ");
                                scanf ("%d", &choix);
                                printf ("\n");
                                if (choix==BonnePorte4){
                                    temp=QuestionsReponsesfacile();
                                    if (temp==1){
                                        printf ("|1|2|3|4|5| Palier 5 \n\n");
                                        printf ("Choisissez votre porte: ");
                                        scanf ("%d", &choix);
                                        if (choix==BonnePorte5){
                                            temp=QuestionsReponsesfacile();
                                            if (temp==1){
                                                fin=clock();
                                                chrono=fin-debut;
                                                printf("BRAVO !\n\nTU AS MIS %f SECONDES AVEC %d SECONDES DE PENALITE \n\n", (double) chrono/CLOCKS_PER_SEC, penalite);
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
            fclose(fichier);
            if (chrono <= score[0])
            {
                printf ("Quel est votre prenom ? \n");
                scanf ("%s", &nom[0]);
                fichier= fopen("MeilleursScoreFacile.txt", "w+");
                printf("Vous avez realiser le meilleur score avec %f secondes!!\n", (double)chrono/CLOCKS_PER_SEC);
                for (int i=1; i<=2; i++){
                    if (i==1){
                        fprintf (fichier, "%ld %ld %ld", chrono, score[1], score[2]);
                    } else if (i==2){
                        fprintf (fichier, "\n");
                        fprintf (fichier, "%s %s %s", nom[0], nom[1], nom[2]);
                    }
                }
                fclose(fichier);
            }
            else if (chrono <= score[1] && chrono > score[0])
            {
                printf ("Quel est votre prenom ? \n");
                scanf ("%s", &nom[1]);
                fichier= fopen("MeilleursScoreFacile.txt", "w+");
                printf("Vous avez realiser le deuxieme meilleur score avec %f secondes!!\n", (double)chrono/CLOCKS_PER_SEC);
                for (int i=1; i<=2; i++){
                    if (i==1){
                        fprintf (fichier, "%ld %ld %ld", score[0], chrono, score[2]);
                    } else if (i==2){
                        fprintf (fichier, "\n");
                        fprintf (fichier, "%s %s %s", nom[0], nom[1], nom[2]);
                    }
                }
                fclose(fichier);
            }
            else if (chrono <= score[2] && chrono > score[0] && chrono > score[1])
            {
                printf ("Quel est votre prenom ? \n");
                scanf ("%s", &nom[2]);
                fichier= fopen("MeilleursScoreFacile.txt", "w+");
                printf("Vous avez realiser le troisieme meilleur score avec %f secondes!!\n", (double)chrono/CLOCKS_PER_SEC);
                for (int i=1; i<=2; i++){
                    if (i==1){
                        fprintf (fichier, "%ld %ld %ld", score[0], score[1], chrono);
                    } else if (i==2){
                        fprintf (fichier, "\n");
                        fprintf (fichier, "%s %s %s", nom[0], nom[1], nom[2]);
                    }
                }
                fclose(fichier);
            }
        }
                                                return chrono;
                                                break;
                                            } else {
                                                printf ("MAUVAISE REPONSE \n\n");
                                                printf ("PENALITE 3S...\n\n");
                                                for (int i=3; i>0; i--){
                                                    printf ("%d", i);
                                                    printf ("\n");
                                                    Sleep(1000);
                                                }
                                                penalite+=3;
                                            }
                                        }
                                    } else {
                                        printf ("MAUVAISE REPONSE \n\n");
                                        printf ("PENALITE 3S...\n\n");
                                        for (int i=3; i>0; i--){
                                            printf ("%d", i);
                                            printf ("\n");
                                            Sleep(1000);
                                        }
                                        penalite+=3;
                                    }
                                }
                            } else {
                                printf ("MAUVAISE REPONSE \n\n");
                                printf ("PENALITE 3S...\n\n");
                                for (int i=3; i>0; i--){
                                    printf ("%d", i);
                                    printf ("\n");
                                    Sleep(1000);
                                }
                                penalite+=3;
                            }
                        }
                    } else {
                        printf ("MAUVAISE REPONSE \n\n");
                        printf ("PENALITE 3S...\n\n");
                        for (int i=3; i>0; i--){
                            printf ("%d", i);
                            printf ("\n");
                            Sleep(1000);
                        }
                        penalite+=3;
                    }
                }
            } else {
                printf ("MAUVAISE REPONSE \n\n");
                printf ("PENALITE 3S...\n\n");
                for (int i=3; i>0; i--){
                    printf ("%d", i);
                    printf ("\n");
                    Sleep(1000);
                }
                penalite+=3;
            }
        }
    }
}



//srand( (unsigned)time( NULL ) );
