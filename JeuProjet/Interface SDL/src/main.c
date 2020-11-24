#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{

    SDL_Window *window;
    SDL_Event e;

    const char *titles[] = {"Jeu de Portes"};

    // Creation de la fenêtre.
    window = SDL_CreateWindow(
        "creation de la fenetre", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 320, 240, SDL_WINDOW_RESIZABLE);

    // appuyez sur n'importe qu'elle touche pour quitter.
    for (; e.type != SDL_QUIT && e.type != SDL_KEYDOWN; SDL_PollEvent(&e))
    {
        static int i = 0, t = 0;

        if (!(++t % 9))
        {
            SDL_SetWindowTitle(window, titles[i]); // boucle à travers laquelle on va voir le titres
            if (++i >= sizeof(titles) / sizeof(titles[0]))
                i = 0;
        }

        SDL_Delay(10);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

// commande pour exécuter ce programme :
// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
// bin\prog.exe