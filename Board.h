//
// Created by Carlos Lara on 4/16/2025.
//

#ifndef SIMPLE_TETRIS_BOARD_H
#define SIMPLE_TETRIS_BOARD_H

#include "Pieces.h"

constexpr int BOARD_LINE_WIDTH = 6; // Width of each of the two lines that delimit the board
constexpr int BLOCK_SIZE = 16; // Width and Height of each block of a piece
constexpr int BOARD_POSITION = 320; // Center position of the board from the left of the screen
constexpr int BOARD_WIDTH = 10; // Board width in blocks
constexpr int BOARD_HEIGHT = 20; // Board height in blocks
constexpr int MIN_VERTICAL_MARGIN = 20; // Minimum vertical margin for the board limit
constexpr int MIN_HORIZONTAL_MARGIN = 20; // Minimum horizontal margin for the board limit
constexpr int PIECE_BLOCKS = 5; // Number of horizontal and vertical blocks of a matrix piece

class Board {
public:
    Board(Pieces *pPieces, int pScreenHeight);

    Board(int (*mBoard)[20], Pieces *mPieces, int mScreenHeight);

    int GetXPosInPixels(int pPos);

    int GetYPosInPixels(int pPos);

    bool IsFreeBlock(int pX, int pY);

    bool IsPossibleMovement(int pX, int pY, int pPiece, int pRotation);

    void StorePiece(int pX, int pY, int pPiece, int pRotation);

    void DeletePossibleLines();

    bool IsGameOver();

private:
    enum {
        POS_FREE, POS_FILLED
    }; // POS_FREE = free position of the board; POS_FILLED = filled position of the board
    int mBoard[BOARD_WIDTH][BOARD_HEIGHT]; // Board that contains the pieces
    Pieces *mPieces;
    int mScreenHeight;

    void InitBoard();

    void DeleteLine(int pY);
};


#endif //SIMPLE_TETRIS_BOARD_H
