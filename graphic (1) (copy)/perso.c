#include "perso.h"


void initialiser_perso(perso *p, int x){
//p->image_perso=IMG_Load ("");

p->position_perso.x=0;
p->position_perso.w=100;
//p->position_perso.h=;
p->vie=3;
p->score=0;
/*
p->mvtx=;
p->mvty=;
p->stable=;
p->vitesse_max_perso=;
p->acceleration=;
p->gravity=;
if (x==1){
p->position_perso.y=;
p->ground=550;
}
if (x==2){
p->position_perso.y=;
p->ground=;
}
*/
}

void deplacer_perso_droite(perso *p){
//p->position_perso.x+=p->mvtx;
animer_mvt_perso_droite(p);
}

void deplacer_perso_gauche(perso *p){
//p->position_perso.x-=p->mvtx;
animer_mvt_perso_gauche(p);
}

void animer_mvt_perso_droite(perso *p){

}

void animer_mvt_perso_gauche(perso *p){

}

void animer_perso_stable(perso *p){

}

void afficher_peso(perso *p, SDL_Surface *screen){
//SDL_BlitSurface(p->image_perso,&p->animation_perso[p->compteur],screen,&p->position_perso);
}

void apply_acceleration(perso *p,Uint32 dt){

}

void apply_gravity (perso *p){

}

void jump_perso(perso *p){

}

int on_ground (perso *p){

}
