
#include "mode_jeu.h"
#include "QuestionsReponses.h"

clock_t jeufacile()
{
    int BonnePorte1, BonnePorte2, BonnePorte3, BonnePorte4, BonnePorte5, temp;
    clock_t chrono, debut, fin;
    int choix = 0;
    char retour;
    srand((unsigned)time(NULL));
    BonnePorte1 = rand() % 5 + 1;
    BonnePorte2 = rand() % 5 + 1;
    BonnePorte3 = rand() % 5 + 1;
    BonnePorte4 = rand() % 5 + 1;
    BonnePorte5 = rand() % 5 + 1;
    debut = clock();
    for (;;)
    {
        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 1 \n\n");
        printf("Choisissez votre porte: ");
        scanf("%d", &choix);
        scanf("%c", &retour);
        printf("\n");
        if (retour == 'q')
        {
            break;
        }
        if (choix == BonnePorte1)
        {
            temp = QuestionsReponses();
            if (temp == 1)
            {
                printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 2 \n\n");
                printf("Choisissez votre porte: ");
                scanf("%d", &choix);
                scanf("%c", &retour);
                printf("\n");
                if (retour == 'q')
                {
                    break;
                }

                if (choix == BonnePorte2)
                {
                    temp = QuestionsReponses();
                    if (temp == 1)
                    {
                        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 3 \n\n");
                        printf("Choisissez votre porte: ");
                        scanf("%d", &choix);
                        scanf("%c", &retour);
                        printf("\n");
                        if (retour == 'q')
                        {
                            break;
                        }
                        if (choix == BonnePorte3)
                        {
                            temp = QuestionsReponses();
                            if (temp == 1)
                            {
                                printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 4 \n\n");
                                printf("Choisissez votre porte: ");
                                scanf("%d", &choix);
                                scanf("%c", &retour);
                                printf("\n");
                                if (retour == 'q')
                                {
                                    break;
                                }
                                if (choix == BonnePorte4)
                                {
                                    temp = QuestionsReponses();
                                    if (temp == 1)
                                    {
                                        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 5 \n\n");
                                        printf("Choisissez votre porte: ");
                                        scanf("%d", &choix);
                                        if (choix == BonnePorte5)
                                        {
                                            temp = QuestionsReponses();
                                            if (temp == 1)
                                            {
                                                fin = clock();
                                                chrono = fin - debut;
                                                printf("BRAVO !\n\nTU AS MIS %f SECONDES.\n", (double)chrono / CLOCKS_PER_SEC);
                                                return chrono;
                                                break;
                                            }
                                            else
                                                printf("MAUVAISE REPONSE \n\n");
                                        }
                                    }
                                    else
                                        printf("MAUVAISE REPONSE \n\n");
                                }
                            }
                            else
                                printf("MAUVAISE REPONSE \n\n");
                        }
                    }
                    else
                        printf("MAUVAISE REPONSE \n\n");
                }
            }
            else
                printf("MAUVAISE REPONSE \n\n");
        }
    }
    return 0;
}

clock_t jeudifficile()
{
    int BonnePorte1, BonnePorte2, BonnePorte3, BonnePorte4, BonnePorte5, temp;
    clock_t chrono, debut, fin;
    int choix = 0;
    char retour;
    srand((unsigned)time(NULL));
    BonnePorte1 = rand() % 5 + 1;
    BonnePorte2 = rand() % 5 + 1;
    BonnePorte3 = rand() % 5 + 1;
    BonnePorte4 = rand() % 5 + 1;
    BonnePorte5 = rand() % 5 + 1;
    debut = clock();
    for (;;)
    {
        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 1 \n\n");
        printf("Choisissez votre porte: ");
        scanf("%d", &choix);
        scanf("%c", &retour);
        printf("\n");
        if (retour == 'q')
        {
            break;
        }
        if (choix == BonnePorte1)
        {
            temp = QuestionsReponses();
            if (temp == 1)
            {
                printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 2 \n\n");
                printf("Choisissez votre porte: ");
                scanf("%d", &choix);
                scanf("%c", &retour);
                printf("\n");
                if (retour == 'q')
                {
                    break;
                }

                if (choix == BonnePorte2)
                {
                    temp = QuestionsReponses();
                    if (temp == 1)
                    {
                        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 3 \n\n");
                        printf("Choisissez votre porte: ");
                        scanf("%d", &choix);
                        scanf("%c", &retour);
                        printf("\n");
                        if (retour == 'q')
                        {
                            break;
                        }
                        if (choix == BonnePorte3)
                        {
                            temp = QuestionsReponses();
                            if (temp == 1)
                            {
                                printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 4 \n\n");
                                printf("Choisissez votre porte: ");
                                scanf("%d", &choix);
                                scanf("%c", &retour);
                                printf("\n");
                                if (retour == 'q')
                                {
                                    break;
                                }
                                if (choix == BonnePorte4)
                                {
                                    temp = QuestionsReponses();
                                    if (temp == 1)
                                    {
                                        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 5 \n\n");
                                        printf("Choisissez votre porte: ");
                                        scanf("%d", &choix);
                                        if (choix == BonnePorte5)
                                        {
                                            temp = QuestionsReponses();
                                            if (temp == 1)
                                            {
                                                fin = clock();
                                                chrono = fin - debut;
                                                printf("BRAVO !\n\nTU AS MIS %f SECONDES.\n", (double)chrono / CLOCKS_PER_SEC);
                                                return chrono;
                                                break;
                                            }
                                            else
                                                printf("MAUVAISE REPONSE \n\n");
                                        }
                                    }
                                    else
                                        printf("MAUVAISE REPONSE \n\n");
                                }
                            }
                            else
                                printf("MAUVAISE REPONSE \n\n");
                        }
                    }
                    else
                        printf("MAUVAISE REPONSE \n\n");
                }
            }
            else
                printf("MAUVAISE REPONSE \n\n");
        }
    }
    return 0;
}

//srand( (unsigned)time( NULL ) );

/*void jeudifficile()
{
    int BonnePorte1, BonnePorte2, BonnePorte3, BonnePorte4, BonnePorte5, temp;
    clock_t chrono, debut, fin;
    int choix = 0;
    char retour;
    srand((unsigned)time(NULL));
    BonnePorte1 = rand() % 5 + 1;
    BonnePorte2 = rand() % 5 + 1;
    BonnePorte3 = rand() % 5 + 1;
    BonnePorte4 = rand() % 5 + 1;
    BonnePorte5 = rand() % 5 + 1;
    debut = clock();
    for (;;)
    {
        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 1 \n\n");
        printf("Choisissez votre porte: ");
        scanf("%d", &choix);
        scanf("%c", &retour);
        printf("\n");
        if (retour == 'q' || 'Q')
        {
            break;
        }
        if (choix == BonnePorte1)
        {
            temp = QuestionsReponses();
            if (temp == 1)
            {
                printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 2 \n\n");
                printf("Choisissez votre porte: ");
                scanf("%d", &choix);
                scanf("%c", &retour);
                printf("\n");
                if (retour == 'q' || 'Q')
                {
                    break;
                }
                if (choix == BonnePorte2)
                {
                    temp = QuestionsReponses();
                    if (temp == 1)
                    {
                        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 3 \n\n");
                        printf("Choisissez votre porte: ");
                        scanf("%d", &choix);
                        scanf("%c", &retour);
                        printf("\n");
                        if (retour == 'q' || 'Q')
                        {
                            break;
                        }
                        if (choix == BonnePorte3)
                        {
                            temp = QuestionsReponses();
                            if (temp == 1)
                            {
                                printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 4 \n\n");
                                printf("Choisissez votre porte: ");
                                scanf("%d", &choix);
                                scanf("%c", &retour);
                                printf("\n");
                                if (retour == 'q' || 'Q')
                                {
                                    break;
                                }
                                if (choix == BonnePorte4)
                                {
                                    temp = QuestionsReponses();
                                    if (temp == 1)
                                    {
                                        printf("\t\t\t\t\t\t|1|2|3|4|5| Palier 5 \n\n");
                                        printf("Choisissez votre porte: ");
                                        scanf("%d", &choix);
                                        scanf("%c", &retour);
                                        printf("\n");
                                        if (retour == 'q' || 'Q')
                                        {
                                            break;
                                        }
                                        if (choix == BonnePorte5)
                                        {
                                            temp = QuestionsReponses();
                                            if (temp == 1)
                                            {
                                                fin = clock();
                                                chrono = fin - debut;
                                                printf("BRAVO !\n\nTU AS MIS %f SECONDES.\n", (double)chrono / CLOCKS_PER_SEC);
                                                return chrono;
                                                break;
                                            }
                                            else
                                                printf("MAUVAISE REPONSE \n\n");
                                        }
                                    }
                                    else
                                        printf("MAUVAISE REPONSE \n\n");
                                }
                            }
                            else
                                printf("MAUVAISE REPONSE \n\n");
                        }
                    }
                    else
                        printf("MAUVAISE REPONSE \n\n");
                }
            }
            else
                printf("MAUVAISE REPONSE \n\n");
        }
    }
}*/
