# gcc : CC
# warnings : CFLAGS
# editions de liens : LDFLAGS
# EXEC
# pour utiliser ces variables $(CC)

CC = gcc
EXEC = executable
CFLAGS = -W -Wall -Wextra
SRC = $(wildcard *.c)
OBJ = $(SRC:.c= .o)
 
all : $(EXEC)

$(EXEC) : main.o menu.o mode_jeu.o QuestionsReponses.o JeuMulti.o Structures.o
	$(CC) -o $@ main.o menu.o mode_jeu.o QuestionsReponses.o JeuMulti.o Structures.o

#%.o : %.c
#	$(CC) -o $@ -c $< $(CFLAGS)

menu.o : menu.c
	gcc -o menu.o -c menu.c $(CFLAGS)

modefacile.o : modefacile.c
	gcc -o mode_jeu.o -c mode_jeu.c $(CFLAGS)

QuestionsReponses.o : QuestionsReponses.c
	gcc -o QuestionsReponses.o -c QuestionsReponses.c $(CFLAGS)

Jeumulti.o : Jeumulti.c
	gcc -o JeuMulti.o -c JeuMulti.c $(CFLAGS)

Structures.o : Structures.c
	gcc -o Structures.o -c Structures.c $(CFLAGS)

clear :
	del *.o

clearall : clear
	del $(EXEC).exe

# VARIABLES SPECIALES
# $@ nom cible exemple reference au $EXEC du dessus : $(CC) -o $@ main.o player.o
# $* nom fichier, sans son extension
# $< nom premiere dependance
# $^ liste des dependance

