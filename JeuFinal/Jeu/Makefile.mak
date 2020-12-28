# gcc : CC
# warnings : CFLAGS
# editions de liens : LDFLAGS
# EXEC
# pour utiliser ces variables $(CC)

CC = gcc
EXEC = executable
CFLAGS = -W -Wall -Wextra -O2
SRC = $(wildcard *.c)
OBJ = $(SRC:.c= .o)

all : $(EXEC)

$(EXEC) : main.o Menu.o QuestionsReponses.o JeuMulti.o ModeJeu.o Joueur.o
	$(CC) -o $@ main.o Menu.o QuestionsReponses.o JeuMulti.o ModeJeu.o Joueur.o

main.o : main.c
	gcc -o main.o -c main.c $(CFLAGS)

Menu.o : Menu.c
	gcc -o Menu.o -c Menu.c $(CFLAGS)

QuestionsReponses.o : QuestionsReponses.c
	gcc -o QuestionsReponses.o -c QuestionsReponses.c $(CFLAGS)

JeuMulti.o : JeuMulti.c
	gcc -o JeuMulti.o -c JeuMulti.c $(CFLAGS)

ModeJeu.o : ModeJeu.c
	gcc -o ModeJeu.o -c ModeJeu.c $(CFLAGS)

Joueur.o : Joueur.c
	gcc -o Joueur.o -c Joueur.c $(CFLAGS)

clear :
	del *.o

clearall : clear
	del $(EXEC).exe

# VARIABLES SPECIALES
# $@ nom cible exemple reference au $EXEC du dessus : $(CC) -o $@ main.o player.o
# $* nom fichier, sans son extension
# $< nom premiere dependance
# $^ liste des dependance

#%.o : %.c
#	$(CC) -o $@ -c $< $(CFLAGS)

