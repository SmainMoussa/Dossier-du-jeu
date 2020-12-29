# Instructions

Pour lancer le jeu soit vous lancez l'executable.exe inclu dans le dossier, si vous voulez le tester le programme vous même, un Makefile pourra gérer tout cela.
	
	2ème méthode:
	
		- Ouvrez votre cmd (Invite de Commande)

		- Dirigez vous vers un dossier dans lequel vous voulez cloner notre dossier du jeu en faisant (cd C:Users....)

		- Ensuite exécutez la commande: git clone https://github.com/SmainMoussa/Dossier-du-jeu.git

		- Faites un git status pour voir si tout est à jour

		- Ensuite faites un cd vers le Dossier-du-Jeu/JeuFinal/Jeu

		- Comme l'exécutable est déjà crée, vous devez le supprimer en faisant: make -f Makefile.mak clearall

		- Puis lancez la commande : make -f Makefile.mak  (celle-ci va faire l'édition des liens et créer un executable.exe et les .o)

		-Si vous souhaitez effacer les fichiers .o :
		make -f Makefile.mak clear

		-Pour effacer l'executable et les .o : 
		make -f Makefile.mak clearall


Pour l'interface SDL qui n'est pas encore abouti :

	- cd .. vers Dossier-du-jeu/JeuFinal/Jeu/Interface SDL, l'interface SDL est dedans 

	- Lancez la commande :	
		gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
	celle-ci va créer un executable du nom prog.exe dans le dossier bin en ce servant du main.c dans le dossier src

	-puis lancez : 
		bin\prog.exe

############

- bibliothèques utilisées :
	stdlib.h
	stdio.h
	time.h
	windows.h

############

- Le jeu présente un mode solo : facile, difficile dans lequels on aura aussi la sauvergarde des scores et le noms des personnes qui ont jouées.
- Un mode multijoueur dans lequel on pourra prendre le nom des joueurs et afficher le temps à l'écran du joueur qui à gagné. 
