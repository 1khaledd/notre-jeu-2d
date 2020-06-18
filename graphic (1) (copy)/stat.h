#ifndef stat_H_INCLUDED
#define stat_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

#include "perso.h"
#include "entite.h"

typedef struct
{
  //creation police/font du texte
  TTF_Font* police_score;

  //creation texte score
  SDL_Surface *texte_score;

  SDL_Rect pos_texte_score;

} score_perso;

typedef struct
{
  //creation police/font du texte
  TTF_Font* police_vie;

  //creation texte vie
  SDL_Surface *texte_vie;
  SDL_Rect pos_texte_vie;

} vie_perso;

typedef struct
{
  //creation police/font du texte
  TTF_Font* police_chrono;

 //val initiale chrono
 float temps_restant;
  float temps_init;

  //creation texte vie
  SDL_Surface *texte_chrono;
  SDL_Rect pos_texte_chrono;

} chrono_perso;

void  init_score(score_perso* s, int x);
void  init_vie(vie_perso* v, int x);
void  init_chrono(chrono_perso* c);
void gestion_vie_score(perso* p, entite *e);
void afficher_chrono(SDL_Surface* screen,chrono_perso* c);
void afficher_vie_score(perso* p,SDL_Surface* screen,score_perso* s, vie_perso* v);
void afficher_vie(perso* p,SDL_Surface* screen,vie_perso* v);
void afficher_score(perso* p,SDL_Surface* screen,score_perso* s);
int condition_fin_jeu (perso* p,chrono_perso *c, int *co);


#endif
