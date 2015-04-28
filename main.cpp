#include <iostream>
#include "Chess.h"
#include <string>
using namespace std;

int main()
{
    string Team1;
    string Team2;
    cout<<"Welcome to Simple Chess!"<<endl<<endl;
    cout<<"------------- How to Play -------------"<<endl;
    cout<<"1. When asked to pick a spot enter the"<<endl;
    cout<<"   letter before the number without a"<<endl;
    cout<<"   space in between."<<endl;
    cout<<"2. The board will rotate for each team"<<endl;
    cout<<"   so that it will seem like an actual"<<endl;
    cout<<"   chess game."<<endl;
    cout<<"3. The game will end when one team "<<endl;
    cout<<"    takes the other teams King."<<endl;
    cout<<"   (Not Check Mate)"<<endl;
    cout<<"4. The game only uses the basic moves "<<endl;
    cout<<"   of each piece and does not include"<<endl;
    cout<<"   the more intricate moves."<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<endl;
    cout<<"LET THE GAME BEGIN!"<<endl;
    cout<<"Enter a name for Team 1: ";
    cin>> ws;
    getline(cin, Team1);
    //cout<<Team1<<endl;
    cout<<"Enter a name for Team 2: ";
    cin>> ws;
    getline(cin, Team2);
    //cout<<Team2<<endl;
    Chess* NewGame = new Chess();
    //cout<<"got out"<<endl;
    NewGame->createBoard(Team1, Team2);

    NewGame->PlayerTurn(Team1, Team2);

    return 0;
}
