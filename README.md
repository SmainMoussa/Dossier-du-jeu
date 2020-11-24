# Instructions azeazeaze

Pour lancer le jeu soit vous lancez l'executable inclu dans le dossier, si vous voulez le tester le programme vous même j'ai crée un Makefile qui pourra gérer tout cela :

	- ouvrer le cmd
	- diriger vous vers l'emplacement du dossier-du-jeu (cd C:....)
	- Puis lancer la commande :
		make -f Makefile.mk
	celle-ci va créer un executable.exe qui pourra lancer le jeu.
	-Si vous souhaiter effacer les fichiers .o :
		make -f Makefile.mk clean
	-Pour effacer l'executable + .o : 
		make -f Makefile.mk cleanall

Pour l'interface SDL qui n'est pas encore abouti :

	- cd C:\\... vers le dossier Interface SDL qui est dans le Dossier-du-jeu
	-Lancer la commande :	
		gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
	qui va créer un executable du nom prog.exe dans le dossier bin en ce servant du main.c dans le dossier src
	-puis lancer : 
		bin\prog.exe


