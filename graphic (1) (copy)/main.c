#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>

#include"st1.h"

int nb_enigme=4;

int main()
{
    int hauteur_fenetre = 700,
        largeur_fenetre = 1100;



    SDL_Init(SDL_INIT_VIDEO);

    //FENETRE PRINCIPALE
    SDL_Surface *screen = NULL;
    screen = SDL_SetVideoMode(largeur_fenetre, hauteur_fenetre, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("My Game", NULL); // titre de la fenetre
  int enigme_right=0,br=0;//br devient 1 si sdl_quit est activée donc on sort de la boucle for

stage1(screen);

    SDL_Quit();

    return 0;
}
