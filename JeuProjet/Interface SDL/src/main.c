/*#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *texture = NULL;
    int statut = EXIT_FAILURE;

    if(0 != SDL_Init(SDL_INIT_VIDEO))
    {
        fprintf(stderr, "Erreur SDL_Init : %s", SDL_GetError());
        goto Quit;
    }
    if(0 != SDL_CreateWindowAndRenderer(640, 480, SDL_WINDOW_SHOWN, &window, &renderer))
    {
        fprintf(stderr, "Erreur SDL_CreateWindowAndRenderer : %s", SDL_GetError());
        goto Quit;
    }
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
                                SDL_TEXTUREACCESS_TARGET, 200, 200);
    if(NULL == texture)
    {
        fprintf(stderr, "Erreur SDL_CreateTexture : %s", SDL_GetError());
        goto Quit;
    }
    statut = EXIT_SUCCESS;
    SDL_Delay(3000);

Quit:
    if(NULL != texture)
        SDL_DestroyTexture(texture);
    if(NULL != renderer)
        SDL_DestroyRenderer(renderer);
    if(NULL != window)
        SDL_DestroyWindow(window);
    SDL_Quit();
    return statut;
}
*/
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