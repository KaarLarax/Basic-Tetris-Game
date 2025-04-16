//
// Created by Carlos Lara on 4/16/2025.
//

#ifndef SIMPLE_TETRIS_IO_H
#define SIMPLE_TETRIS_IO_H


// ------ Includes -----

#ifndef LINUX

#include "SDL/include/SDL.h"
#include "SDL/SDL_GfxPrimitives/SDL_gfxPrimitives.h"

#else
#include <SDL/SDL.h>
#include "SDL/SDL_GfxPrimitives/sdl_gfxprimitives.h"
#endif

// ------ Enums -----

enum color {
    BLACK, RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, WHITE, COLOR_MAX
}; // Colors


// --------------------------------------------------------------------------------
//									 IO
// --------------------------------------------------------------------------------

class IO {
public:

    IO();

    void DrawRectangle(int pX1, int pY1, int pX2, int pY2, enum color pC);

    void ClearScreen();

    int GetScreenHeight();

    int InitGraph();

    int Pollkey();

    int Getkey();

    int IsKeyDown(int pKey);

    void UpdateScreen();

};

#endif //SIMPLE_TETRIS_IO_H
