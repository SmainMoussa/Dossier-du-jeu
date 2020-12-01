# Instructions

Pour lancer le jeu soit vous lancez l'executable inclu dans le dossier, si vous voulez le tester le programme vous même j'ai crée un Makefile qui pourra gérer tout cela :

	- ouvrer le cmd
	- diriger vous vers l'emplacement du dossier-du-jeu (cd C:....)
	- Puis lancer la commande :
		make -f Makefile.mk
	celle-ci va créer un executable.exe qui pourra lancer le jeu.
	-Si vous souhaiter effacer les fichiers .o :
		make -f Makefile.mk clear
	-Pour effacer l'executable + .o : 
		make -f Makefile.mk clearall

Pour l'interface SDL qui n'est pas encore abouti :

	- cd C:\\... vers le dossier Interface SDL qui est dans le Dossier-du-jeu/JeuProjet
	-Lancer la commande :	
		gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
	qui va créer un executable du nom prog.exe dans le dossier bin en ce servant du main.c dans le dossier src
	-puis lancer : 
		bin\prog.exe


#include <stdio.h>
#include <stdlib.h>

void jeufacile (){
    int BonnePorte1,BonnePorte2,BonnePorte3,BonnePorte4,BonnePorte5, temp;
    int choix=0;
    srand( (unsigned)time( NULL ) );
    BonnePorte1= rand()%5+1;
    BonnePorte2= rand()%5+1;
    BonnePorte3= rand()%5+1;
    BonnePorte4= rand()%5+1;
    BonnePorte5= rand()%5+1;
    for (;;){
        printf ("|1|2|3|4|5| Palier 1 \n\n");
        printf ("Choisissez votre porte: ");
        scanf ("%d", &choix);
        printf ("\n");
        if (choix==BonnePorte1){
            temp=QuestionsReponses();
            if (temp==1){
                printf ("|1|2|3|4|5| Palier 2 \n\n");
                printf ("Choisissez votre porte: ");
                scanf ("%d", &choix);
                printf ("\n");
                if (choix==BonnePorte2){
                    temp=QuestionsReponses();
                    if (temp==1){
                        printf ("|1|2|3|4|5| Palier 3 \n\n");
                        printf ("Choisissez votre porte: ");
                        scanf ("%d", &choix);
                        printf ("\n");
                        if (choix==BonnePorte3){
                            temp=QuestionsReponses();
                            if (temp==1){
                                printf ("|1|2|3|4|5| Palier 4 \n\n");
                                printf ("Choisissez votre porte: ");
                                scanf ("%d", &choix);
                                printf ("\n");
                                if (choix==BonnePorte4){
                                    temp=QuestionsReponses();
                                    if (temp==1){
                                        printf ("|1|2|3|4|5| Palier 5 \n\n");
                                        printf ("Choisissez votre porte: ");
                                        scanf ("%d", &choix);
                                        if (choix==BonnePorte5){
                                            temp=QuestionsReponses();
                                            if (temp==1){
                                                printf ("FIN\n");
                                                break;
                                            } else printf ("MAUVAISE REPONSE \n\n");
                                        }
                                    } else printf ("MAUVAISE REPONSE \n\n");
                                }
                            } else printf ("MAUVAISE REPONSE \n\n");
                        }
                    } else printf ("MAUVAISE REPONSE \n\n");
                }
            } else printf ("MAUVAISE REPONSE \n\n");
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

void strcpy_(char s1[], char s2[])
{
    int i;

    for (i = 0; s2[i]!='\0'; s1[i] = s2[i], i++);
    s1[i-1] = '\0';
}

int QuestionsReponses(int argc, char *argv[])
{
    srand( (unsigned)time( NULL ) );
    FILE* fichier=NULL;
    int choix=rand ()%42+1;
    char reponse[100]="";
    char chaine1[100]="";
    char chaine2[100]="";
    char chaine3[100]="";
    fichier=fopen("questions.txt", "r");
    if (fichier!=NULL){
        for (int i=1; i<=choix; i++){
            fgets (chaine1, 100, fichier);
            if (i==choix){
                printf ("%s", chaine1);
                break;
            }
        }
    }
    fclose(fichier);
    printf ("\n");
    printf ("REPONSE: ");
    scanf ("%s", reponse);
    printf ("\n");
    fichier=NULL;
    fichier=fopen("reponses.txt", "r");
    if (fichier!=NULL){
        for (int i=1; i<=choix; i++){
            fgets (chaine2, 100, fichier);
            if (i==choix){
                strcpy_(chaine3, chaine2);
                if (strcmp(chaine3, reponse)==0){
                    fclose(fichier);
                    return 1;
               } else {
                    fclose (fichier);
                    return 0;
               }
            }
        }
    }
}

