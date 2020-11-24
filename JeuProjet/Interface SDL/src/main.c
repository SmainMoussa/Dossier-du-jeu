#include <SDL2/SDL.h>
#include <SDL2/SDL_surface.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

    SDL_Window *window;
    SDL_Event e; // elle va récupérer ce qui va se passer

    const char *titles[] = {"Jeu de Portes"}; // on met un titre à noter fenêtre

    // Creation de la fenêtre.
    window = SDL_CreateWindow(
        "creation de la fenetre", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_RESIZABLE); // talle de la fenêtre 800x600

    // Appuyez sur n'importe qu'elle touche pour quitter.
    for (; e.type != SDL_QUIT && e.type != SDL_KEYDOWN; SDL_PollEvent(&e))
    {
        static int i = 0, t = 0;

        if (!(++t % 9))
        {
            SDL_SetWindowTitle(window, titles[i]); // Une boucle qui va faire passer le titre qu'on n'a initialisé plus haut
            if (++i >= sizeof(titles) / sizeof(titles[0]))
                i = 0;
        }

        SDL_Delay(10);
    }

    SDL_DestroyWindow(window); // on va detruire la fenêtre une fois qu'on a appuyer sur une touche
    SDL_Quit();                // On va quitter la fenêtre
    return 0;
}

// commande pour exécuter ce programme :
// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
// bin\prog.exe