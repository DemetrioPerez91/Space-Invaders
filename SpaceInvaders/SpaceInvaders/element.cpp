#include "element.h"
#include "defines.h"
Element::Element(){
    printf("looool");
}

void Element::setX(int x){this->x = x;}
void Element::setY(int y){ this->y = y;}
void Element::setW(int w){ this->w = w;}
void Element::setH(int h){ this->h = h;}
int Element::getX(){return this->x;}
int Element::getY(){return this->y;}
int Element::getW(){return this->w;}
int Element::getH(){return this->h;}

SDL_Surface * Element::loadSurface(std::string path){
    printf("loading %s\n",path.c_str());
    SDL_Surface *loader = NULL;
    loader = IMG_Load(path.c_str());
    if(loader==NULL){
        printf("SDL not initialized SDL_Error: %s \n", SDL_GetError());
        //printf("Unable to load surface %s ",path.c_str());

    }else{
        printf("done");
    }

    return loader;
}

void Element::render(SDL_Surface * screen, SDL_Surface * surface,SDL_Rect * rect){
    SDL_BlitSurface(surface,NULL,screen,rect);

    printf("surface blitted\n");
}
