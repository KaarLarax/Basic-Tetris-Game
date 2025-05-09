//
// Created by Carlos Lara on 4/16/2025.
//

#include "Pieces.h"
#include "Tetris.h"

int Pieces::GetBlockType(int pPiece, int pRotation, int pX, int pY) {
    return mPieces [pPiece][pRotation][pX][pY];
}

int Pieces::GetXInitialPosition(int pPiece, int pRotation) {
    return mPiecesInitialPosition [pPiece][pRotation][0];
}

int Pieces::GetYInitialPosition(int pPiece, int pRotation) {
    return mPiecesInitialPosition [pPiece][pRotation][1];
}
