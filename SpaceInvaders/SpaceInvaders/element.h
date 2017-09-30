#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED
#include"defines.h"

using namespace std;
class Element{
    public:
        Element();
        SDL_Surface *loadSurface(std::string path);
        void setX(int x);
        int getX();
        void setY(int y);
        int getY();
        void setW(int w);
        int getW();
        void setH(int h);
        int getH();
        int x;
        int y;
        int w;
        int h;
        int speed;
        SDL_Surface * surface;
        void render(SDL_Surface * screen, SDL_Surface * surface,SDL_Rect * rect);

};

#endif // ELEMENT_H_INCLUDED
