#include<cstdlib>
#include<iostream>
#include"game.h"

using namespace std;

Game game;
Player1 p1;
Player2 p2;

int main(){
    
    p1=game.p1;
    p2=game.p2;
    game.setInitialPosition();
    if(game.startGame()==1)
         cout<<endl<<"Player 1 Wins";
    else
         cout<<endl<<"Player 2 Wins";
    int a;
    cin>>a;
}

void Game::setInitialPosition()
{
     p1.setPosition(rand()%100);
     int temp=rand()%100;
     while(temp==p1.getPosition())
          temp=rand()%100;
          
     p2.setPosition(temp);
}

int Game::startGame()
{
     while(p1.getPosition()!=p2.getPosition())
     {
          p1.getmove();
          cout<<endl<<p1.getPosition()<<" ";
          if(p1.getPosition()==p2.getPosition())
               return 1;
          p2.getmove();
          cout<<p2.getPosition();
          if(p1.getPosition()==p2.getPosition())
               return 2;
     }
}
