// Zach Withrow and Blaine Ramsdell
// April 26, 2015
// Final Project: Phase 2

#include <iostream>
#include "Chess.h"
#include <string>

using namespace std;

int main()
{
    string Team1;
    string Team2;

    cout<<"Welcome to Simple Chess"<<endl;

    cout<<"Enter name for Team 1: ";
    cin>> ws;
    getline(cin, Team1);

    cout<<"Enter name for Team 2: ";
    cin>> ws;
    getline(cin, Team2);

    Chess* NewGame = new Chess();
    NewGame->createBoard(Team1, Team2);
    NewGame->PlayerTurn(Team1, Team2);

    return 0;
}

