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

$(EXEC) : main.o menu.o mode_jeu.o
	$(CC) -o $@ main.o menu.o mode_jeu.o

#%.o : %.c
#	$(CC) -o $@ -c $< $(CFLAGS)

menu.o : menu.c
	gcc -o menu.o -c menu.c $(CFLAGS)

modefacile.o : modefacile.c
	gcc -o mode_jeu.o -c mode_jeu.c $(CFLAGS)

clear :
	del *.o

clearall : clear
	del $(EXEC).exe

# VARIABLES SPECIALES
# $@ nom cible exemple reference au $EXEC du dessus : $(CC) -o $@ main.o player.o
# $* nom fichier, sans son extension
# $< nom premiere dependance
# $^ liste des dependance

