#include "map.h"

void initialiser_map (map *m,SDL_Surface *screen)
{


}
void perso_map(map *m, perso *p){

}
void entite_map(map *m, entite *e){

}

void affiche_map(map *m , SDL_Surface *screen, entite *e){
      //SDL_BlitSurface(m->map, NULL, screen,&m->map_pos);
    //  SDL_BlitSurface(m->mini_perso, NULL, screen,&m->pos_perso_map);
      //SDL_BlitSurface(m->mini_entite, NULL, screen,&m->pos_entite_map);

}

void mise_a_jour_map(map *m , SDL_Surface *screen, perso *p, entite *e){
  perso_map(m,p);
  entite_map(m,e);
  affiche_map(m,screen,e);
}
