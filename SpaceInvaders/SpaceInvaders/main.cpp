#include <iostream>
#include "defines.h"
#include "hero.h"
#include "element.h"
#include "defines.h"
using namespace std;

struct StateStruct{
    int(*statePointer)();
};
//SDL INITIALIZATIONS
SDL_Surface * screen = NULL;
SDL_Window * window = NULL;



//METHOD DECLARATIONS
bool init();
void shutdown();



bool init(){
    bool success =true;
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER)<0){
        printf("SDL ERROR ");
        success = false;
    }
    else{
        window = SDL_CreateWindow("星人ブラスタ",0,0,SCREEN_H,SCREEN_W,SDL_WINDOW_SHOWN);
        if(window==NULL){
            printf("SDL Window error ");
            success = false;
        }else{
            screen = SDL_GetWindowSurface(window);
            if(screen == NULL){
                printf("Screen error");
                success = false;
            }
        }
    }
    return success;
}

int main()
{
    if(init()){
        
        Hero hero;
        int i = 0;
        while(i<50000){
            hero.renderMe(screen);
            
            SDL_UpdateWindowSurface(window);
            printf(" MY X %i \n",hero.getX());
            i++;
            
        }
        
    }
    
    return 0;
}
