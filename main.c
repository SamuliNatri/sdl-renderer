#include <stdio.h>
#include <SDL.h>

int main(int argc, char *argv[]) {
	
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window *Window = 
        SDL_CreateWindow("Title",
                         SDL_WINDOWPOS_CENTERED,
                         SDL_WINDOWPOS_CENTERED,
                         640, 640, 0);
    
    SDL_Renderer *Renderer = 
        SDL_CreateRenderer(Window, -1, SDL_RENDERER_PRESENTVSYNC);
    
    int Running = 1;
    
    SDL_Event Event = {0};
    
    while(Running) {
        while(SDL_PollEvent(&Event)) {
            switch(Event.type) {
                case SDL_QUIT: { Running = 0; } break;
                case SDL_KEYDOWN: { 
                    switch(Event.key.keysym.sym) {
                        case SDLK_o: { Running = 0; }
                        break;
                    }
                } break;
            }
        }
        
        // *P > A
        //  > B
        
        // .
        // .
        // .
        
        //  .
        //  .
        //  .
        
        // Draw to the backbuffer
        
        SDL_SetRenderDrawColor(Renderer, 30, 30, 30, 255);
        SDL_RenderClear(Renderer);
        
        SDL_SetRenderDrawColor(Renderer, 40, 40, 40, 255);
        SDL_RenderFillRect(Renderer, &(SDL_Rect){64, 64, 64, 64});
        
        // Display image on the screen
        
        SDL_RenderPresent(Renderer);
    }
    
    SDL_Quit();
    
	return 0;
}
