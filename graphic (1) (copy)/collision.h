#ifndef collision_H_INCLUDED
#define collision_H_INCLUDED

#include "perso.h"
#include "back.h"
#include"entite.h"
#include "math.h"

int collision_trigo(perso* p , entite *e);

SDL_Color GetPixel (SDL_Surface *pSurface , int x , int y);
void update_point_collision(perso *hero);
int collision_droite(perso *hero, background *bg);
int collision_gauche(perso *hero, background *bg);
int collision_haut(perso *hero, background *bg);
int collision_bas(perso *hero, background *bg);
void update_perfect_collision(perso *p, background *bg);

#endif
