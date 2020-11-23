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

$(EXEC) : main.o menu.o modefacile.o
	$(CC) -o $@ main.o menu.o modefacile.o

#%.o : %.c
#	$(CC) -o $@ -c $< $(CFLAGS)

menu.o : menu.c
	gcc -o menu.o -c menu.c $(CFLAGS)

modefacile.o : modefacile.c
	gcc -o modefacile.o -c modefacile.c $(CFLAGS)

clean :
	del *.o

cleanall : clean
	del $(EXEC).exe

# VARIABLES SP�CIALES
# $@ nom cible exemple r�f�rence au $EXEC du dessus : $(CC) -o $@ main.o player.o
# $* nom fichier, sans son extension
# $< nom premiere d�pendance
# $^ liste des d�pendance

