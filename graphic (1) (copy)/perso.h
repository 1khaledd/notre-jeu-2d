#ifndef perso_H_INCLUDED
#define perso_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>


typedef struct
{
  //image (spritesheet)
    SDL_Surface *image_perso;
    //position
    SDL_Rect position_perso;
int stable;
    double mvtx;
    double acceleration;
    int vitesse_max_perso;
    int mvty;
    int vie;
    int score;
    int gravity;
    int ground;


} perso;

void initialiser_perso(perso *p, int x);
void deplacer_perso_droite(perso *p);
void deplacer_perso_gauche(perso *p);
void animer_mvt_perso_droite(perso *p);
void animer_mvt_perso_gauche(perso *p);
void animer_perso_stable(perso *p);
void afficher_peso(perso *p, SDL_Surface *screen);
void apply_acceleration(perso *p,Uint32 dt);
void apply_gravity (perso *p);
void jump_perso(perso *p);
int on_ground (perso *p);


#endif
