#ifndef MODEFACILE_H_INCLUDED
#define MODEFACILE_H_INCLUDED

#include <stdlib.h>
extern void jeufacile();

#endif // MODEFACILE_H_INCLUDED

#define HEADER_H_INCLUDED

/*
#include <stdio.h>
#include <stdlib.h>


void jeufacile (){

    int BonnePorte1,BonnePorte2,BonnePorte3,BonnePorte4,BonnePorte5;
    int choix=0;

    srand( (unsigned)time( NULL ) );
    BonnePorte1= rand()%5+1;
    BonnePorte2= rand()%5+1;
    BonnePorte3= rand()%5+1;
    BonnePorte4= rand()%5+1;
    BonnePorte5= rand()%5+1;
    for (;;){
        printf ("\t\t\t\t\t\t |1|2|3|4|5| Palier 1 \n\n");
        printf ("Choisissez votre porte: ");
        scanf ("%d", &choix);
        printf ("\n");
        if (choix==BonnePorte1){
            printf ("\t\t\t\t\t\t |1|2|3|4|5| Palier 2 \n\n");
            printf ("Choisissez votre porte: ");
            scanf ("%d", &choix);
            printf ("\n");}
            if (choix==BonnePorte2){
                printf ("\t\t\t\t\t\t |1|2|3|4|5| Palier 3 \n\n");
                printf ("Choisissez votre porte: ");
                scanf ("%d", &choix);
                printf ("\n");
                if (choix==BonnePorte3){
                    printf ("\t\t\t\t\t\t |1|2|3|4|5| Palier 4 \n\n");
                    printf ("Choisissez votre porte: ");
                    scanf ("%d", &choix);
                    printf ("\n");
                    if (choix==BonnePorte4){
                        printf ("\t\t\t\t\t\t |1|2|3|4|5| Palier 5 \n\n");
                        printf ("Choisissez votre porte: ");
                        scanf ("%d", &choix);
                        if (choix==BonnePorte5){
                            printf ("Fin");
                            break;
                        }
                    }
                }
            }
        }
}
*/