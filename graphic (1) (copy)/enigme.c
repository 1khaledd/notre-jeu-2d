#include"enigme.h"



int  enigme(SDL_Surface *screen,int *br)
{
  SDL_Surface *back;
  back=IMG_Load("graphic/back.jpg");
  int A;
    int continuer = 1;
    SDL_Event event;

    while (continuer)
    {
      SDL_BlitSurface(back,NULL,screen,NULL);
        switch(event.type)
        {
            case SDL_QUIT:
            A=0;
            *br=1;
                continuer = 0;
                break;

       }

   }

return A;
}
