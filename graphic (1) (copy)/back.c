#include "back.h"

int width_bg=1380;

void initialiser_back (background *b, int x)
{
b->back=IMG_Load("graphic/11.jpg");

if (x==1){
b->back_pos.x = 0;
b->back_pos.y = 350;
b->camera.x=0;
b->camera.y=-350;
b->camera.w=1100;
b->camera.h=700;
}
if (x==2){
b->back_pos.x = 0;
b->back_pos.y = 0;
b->camera.x=0;
b->camera.y=0;
b->camera.w=1100;
b->camera.h=350;
}
}
int scrol_right(background *b, SDL_Surface *screen, entite *e, perso *p)
{


}

int scrol_left(background *b, SDL_Surface *screen, entite *e, perso *p)
{

}

void affiche_back(background *b, SDL_Surface *screen)
{
   SDL_BlitSurface(b->back, &b->camera, screen, NULL);
}
