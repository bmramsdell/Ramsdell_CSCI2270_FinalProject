// Zach Withrow and Blaine Ramsdell
// April 26, 2015
// Final Project: Phase 2

#ifndef CHESS_H
#define CHESS_H
#include <iostream>


struct boardSpace
{
    std::string name;
    std::string boardSpot;
    bool occupied;
    std::string team;
    boardSpace *left;
    boardSpace *right;
    boardSpace *up;
    boardSpace *down;
    boardSpace *upLeft;
    boardSpace *upRight;
    boardSpace *downLeft;
    boardSpace *downRight;
};

class Chess
{
    public:
        Chess();
        virtual ~Chess();
        void createBoard(std::string, std::string);
        boardSpace* newSpace(std::string);
        void team1Board();
        void team2Board();
        void PlayerTurn(std::string, std::string);
        boardSpace* SearchSpot(std::string);
        bool checkForKing(std::string);
        bool Rook(std::string, boardSpace *, int);
        bool Bishop(std::string, boardSpace *, int);
        bool Queen(std::string, boardSpace *, int);
        bool Pawn(std::string, boardSpace *, int);
        bool King(std::string, boardSpace *, int);
        bool Knight(std::string, boardSpace *, int);
        void PawnSwitchOut(boardSpace *,std::string, int);
    protected:
    private:
        boardSpace* beginning;
        boardSpace* ending;
};

#endif // CHESS_H
