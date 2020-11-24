#include "QuestionsReponses.h"

int QuestionsReponses(int argc, char *argv[])
{
    srand((unsigned)time(NULL));
    FILE *fichier = NULL;
    int choix = rand() % 2 + 1;
    char reponse;
    char chaine1[100] = "";
    char chaine2[100] = "";
    fichier = fopen("questions.txt", "r");
    if (fichier != NULL)
    {
        for (int i = 1; i <= choix; i++)
        {
            fgets(chaine1, 100, fichier);
            if (i == choix)
            {
                printf("%s", chaine1);
                break;
            }
        }
    }
    fclose(fichier);
    printf("\n");
    printf("Reponse: ");
    scanf("%s", &reponse);
    fichier = NULL;
    fichier = fopen("reponses.txt", "r");
    if (fichier != NULL)
    {
        for (int i = 1; i <= choix; i++)
        {
            printf("coucou");
            fgets(chaine2, 100, fichier);
            printf("coucou: %s", chaine2);
            if (i == choix)
            {
                if (chaine2 == reponse)
                {
                    fclose(fichier);
                    return 1;
                }
                else
                {
                    fclose(fichier);
                    return 0;
                }
            }
        }
    }
}