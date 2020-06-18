#ifndef entite_H_INCLUDED
#define entite_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "time.h"
#include"perso.h"
typedef struct {
SDL_Surface *entite ;
SDL_Rect entite_pos;
SDL_Rect animation_entite[60];
int frame_entite;
int col;
int type;
}entite ;

void initialiser_entite (entite *e, int x) ;
void mise_a_jour_entite (entite *e,perso *p);
void afficher_entite(entite * e , SDL_Surface *screen);
void anim_entite(entite *e);
void mvt_entite(entite *e,perso *p);
int detect_collision(perso *p, entite* e);
void randomise_min_max(entite *e);
#endif
