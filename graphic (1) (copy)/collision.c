#include "collision.h"

int collision;

int collision_trigo(perso* p , entite *e){

}

SDL_Color GetPixel (SDL_Surface *pSurface , int x , int y){
  SDL_Color color ;
  Uint32 col=0;
  char* pPosition = (char*) pSurface->pixels ;
  pPosition += (pSurface->pitch * y);
  pPosition += (pSurface->format->BytesPerPixel * x);

  memcpy(&col , pPosition , pSurface->format->BytesPerPixel);
  SDL_GetRGB(col ,pSurface->format , &color.r , &color.g ,&color.b );


  return (color) ;
}


void update_point_collision(perso *hero){

}

int collision_droite(perso *hero, background *bg){
int collision=-1;

return collision;
}

int collision_gauche(perso *hero, background *bg){
int collision=-1;

return collision;
}

int collision_haut(perso *hero, background *bg){
int collision=-1;

return collision;
}

int collision_bas(perso *hero, background *bg){
collision=-1;

return collision;
}

void update_perfect_collision(perso *p, background *bg){
//collision bas
  if (collision_bas(p,bg)==-1){
    //traitment
}
if (collision_bas(p,bg)==0){
  //traitment
}
    if (collision_bas(p,bg)==1) //piege -> vie diminue
          {
p->vie--;
          }

}
