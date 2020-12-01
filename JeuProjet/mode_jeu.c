
#include "mode_jeu.h"
#include "QuestionsReponses.h"

void jeufacile()
{
    int BonnePorte1, BonnePorte2, BonnePorte3, BonnePorte4, BonnePorte5, temp;
    int choix = 0;
    char retour;
    srand((unsigned)time(NULL));
    BonnePorte1 = rand() % 5 + 1;
    BonnePorte2 = rand() % 5 + 1;
    BonnePorte3 = rand() % 5 + 1;
    BonnePorte4 = rand() % 5 + 1;
    BonnePorte5 = rand() % 5 + 1;
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
                                        scanf("%c", &retour);
                                        printf("\n");
                                        if (retour == 'q')
                                        {
                                            break;
                                        }
                                        if (choix == BonnePorte5)
                                        {
                                            temp = QuestionsReponses();
                                            if (temp == 1)
                                            {
                                                printf("FIN\n");
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
}

void jeudifficile()
{

    int BonnePorte1, BonnePorte2, BonnePorte3, BonnePorte4, BonnePorte5, temp;
    int choix = 0;
    char retour;

    srand((unsigned)time(NULL));
    BonnePorte1 = rand() % 5 + 1;
    BonnePorte2 = rand() % 5 + 1;
    BonnePorte3 = rand() % 5 + 1;
    BonnePorte4 = rand() % 5 + 1;
    BonnePorte5 = rand() % 5 + 1;

    for (;;)
    {
        printf("\t\t\t\t\t\t\t|1|2|3|4|5| Palier 1 \n\n");
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
            temp = QuestionsReponses(); // DIFFICILE : nouveau .txt avec questions difficiles + un compteur d'erreurs
            if (temp == 1)
            {
                printf("\t\t\t\t\t\t\t|1|2|3|4|5| Palier 2 \n\n");
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
                        printf("\t\t\t\t\t\t\t|1|2|3|4|5| Palier 3 \n\n");
                        printf("Choisissez votre porte: ");
                        scanf("%d", &choix);
                        scanf("%c", &retour);
                        printf("\n");
                        if (retour == 'q')
                        {
                            break;
                        };
                        if (choix == BonnePorte3)
                        {
                            temp = QuestionsReponses();
                            if (temp == 1)
                            {
                                printf("\t\t\t\t\t\t\t|1|2|3|4|5| Palier 4 \n\n");
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
                                        printf("\t\t\t\t\t\t\t|1|2|3|4|5| Palier 5 \n\n");
                                        printf("Choisissez votre porte: ");
                                        scanf("%d", &choix);
                                        scanf("%c", &retour);
                                        printf("\n");
                                        if (retour == 'q')
                                        {
                                            break;
                                        }
                                        if (choix == BonnePorte5)
                                        {
                                            printf("Fin");
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else
                            printf("Mauvaise reponse \n");
                    }
                }
            }
        }
    }
}