#include"hero.h"
#include "element.h"
#include "defines.h"
Hero::Hero(){
    x = SCREEN_W/2;
    y = SCREEN_H-78;
    w = 55;
    h = 39;
    surface = loadSurface(SHIP1);
    printf("LOADED");

}
void Hero::renderMe(SDL_Surface * screen){
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    render(surface,screen,&rect);
    printf("Hero Rendered");
}




