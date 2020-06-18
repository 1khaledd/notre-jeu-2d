#include "st1.h"

int stage1(SDL_Surface* screen){
TTF_Init();

int win=0;

//declaration mini map
map m;
initialiser_map(&m,screen);


//declaration & int perso
perso p;
initialiser_perso(&p,1);
perso p2;
initialiser_perso(&p2,2);

//declaration et init score
score_perso score;
init_score(&score,1);
score_perso score2;
init_score(&score2,2);

//declaration & init vie
vie_perso vie;
init_vie(&vie,1);
vie_perso vie2;
init_vie(&vie2,2);


//declaration & init background
background bg;
initialiser_back(&bg,1);
background bg2;
initialiser_back(&bg2,2);


int a=1,a1=1; //a -> affichage entite ou non

//declaration & init entite
entite es;
initialiser_entite(&es,1);
entite es2;
initialiser_entite(&es2,2);

//declaration et init chrono
chrono_perso c;
init_chrono(&c);

//declaration et init fps
Uint32 t_dep,t_fin,dt=1;
    int fps=30;

//declaration et init rotozoom
rotozoom roto;
init_rotozoom(&roto);


//boucle pseudo infinie
SDL_EnableKeyRepeat(200,0); //refresh imput : (duree de la pression du boutton,intervalle de repetition)
int continuer=1;
SDL_Event event;
while (continuer) {

t_dep=SDL_GetTicks();
  es.col=0;
  p.stable=0;
  es2.col=0;
  p2.stable=0;

if(SDL_PollEvent(&event))
{
  switch(event.type)
  {
    case SDL_QUIT:
continuer=0;
    break;

    case SDL_KEYDOWN:

switch(event.key.keysym.sym){
//mvt perso 1
  case SDLK_RIGHT: //appuie sur fleche droite
    if(scrol_right(&bg,screen,&es,&p))
    if (p.position_perso.x<1000)
    deplacer_perso_droite(&p);
      break;

    case SDLK_LEFT : //appuie sur fleche gauche
    if(scrol_left(&bg,screen,&es,&p))
    deplacer_perso_gauche(&p);
    break;

    case SDLK_UP : //appuie sur fleche up (jump)
 jump_perso(&p);
    break;


//mvt perso 2

case SDLK_c: //appuie c (mvt droite)
  if(scrol_right(&bg2,screen,&es2,&p2))
  if (p2.position_perso.x<1000)
  deplacer_perso_droite(&p2);
    break;

  case SDLK_w : //appuie sur w (mvt gauche)
  if(scrol_left(&bg2,screen,&es2,&p2))
  deplacer_perso_gauche(&p2);
  break;

  case SDLK_s : //appui sur s (jump)
jump_perso(&p2);
  break;

}

    break;
  }
}


//affichage background
affiche_back(&bg,screen);
affiche_back(&bg2,screen);

//mise a jour et affichage entite
mise_a_jour_entite(&es,&p);
if(detect_collision(&p,&es))
gestion_vie_score(&p,&es);
afficher_entite(&es,screen);

mise_a_jour_entite(&es2,&p2);
if(detect_collision(&p2,&es2))
gestion_vie_score(&p2,&es2);
afficher_entite(&es2,screen);

//mise a jour et affichage mini map
mise_a_jour_map(&m,screen,&p,&es);

//mise a jour et affichage personnage
afficher_chrono(screen,&c);
afficher_vie_score(&p,screen,&score,&vie);
afficher_vie_score(&p2,screen,&score2,&vie2);

//traitment et affichage perso
apply_gravity(&p);
if (!p.stable)
animer_perso_stable(&p);
afficher_peso(&p,screen);

apply_gravity(&p2);
if (!p2.stable)
animer_perso_stable(&p2);
afficher_peso(&p2,screen);

//rotozoom
update_rotozoom(&roto,fps,dt);
afficher_rotozoom(roto,screen);

SDL_Flip(screen);

//conditions fin jeu
//le jeu s'arrete si l'un des perso perd

win=condition_fin_jeu (&p,&c,&continuer); //perso 1
win=condition_fin_jeu (&p2,&c,&continuer); //perso 2

//appliquer fps
t_fin=SDL_GetTicks();
dt=t_fin-t_dep;
if (1000/fps>dt) SDL_Delay (1000/fps-dt);

}
return win;
}
