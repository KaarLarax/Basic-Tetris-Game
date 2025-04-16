//
// Created by Carlos Lara on 4/16/2025.
//

#ifndef SIMPLE_TETRIS_PIECES_H
#define SIMPLE_TETRIS_PIECES_H

// ——————————————————————————–
// Pieces
// ——————————————————————————–

class Pieces {
public:
    int GetBlockType(int pPiece, int pRotation, int pX, int pY);

    int GetXInitialPosition(int pPiece, int pRotation);

    int GetYInitialPosition(int pPiece, int pRotation);
};

#endif //SIMPLE_TETRIS_PIECES_H
