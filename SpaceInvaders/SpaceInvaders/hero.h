#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include "element.h"

class  Hero:public Element{
    public:
        Hero();
        void shoot();
        void moveShip();
        void die();
        void checkCollision();
        void renderMe(SDL_Surface * screen);
    private:
        int lives;
        int lag;
};


#endif // HERO_H_INCLUDED
