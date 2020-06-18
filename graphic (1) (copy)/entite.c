#include "entite.h"


void initialiser_entite(entite *e, int x)
{

}

int detect_collision(perso *p, entite* e){
  if (e->col==0){
if ((p->position_perso.x + p->position_perso. w< e->entite_pos. x) || (p->position_perso.x> e->entite_pos. x + e->entite_pos. w) ||
(p->position_perso.y + p->position_perso.h< e->entite_pos. y) || (p->position_perso.y> e->entite_pos. y + e->entite_pos. h ))
e->col= 0;
else
e->col=1;
}
return e->col;
}

void afficher_entite(entite * e , SDL_Surface *screen)
{

  // SDL_BlitSurface(e->entite,&e->animation_entite[e->frame_entite], screen, &e->entite_pos);



}

void anim_entite(entite *e)
{
}
  int down=0,up=0;

int distance;

void mvt_entite(entite *e, perso *p)
{


}

void mise_a_jour_entite(entite *e,perso *p){
mvt_entite(e,p);
anim_entite (e);

}

void randomise_min_max(entite *e){

}
