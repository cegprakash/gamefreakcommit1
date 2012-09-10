#include"player1.h"
#include"player2.h"

class Game
{
     public:
          Player1 p1; Player2 p2;
          Game();
          int startGame();
          void setInitialPosition();
};

Game::Game()
{
}


