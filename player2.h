#include<cstdlib>

class Player2{
      public:
      int position;
      Player2();
      void getmove();
      int getPosition();
      void setPosition(int pos);
};

Player2::Player2()
{
      position=-1;
}

void Player2::getmove (){ 
     position=rand()%100;
}
void Player2::setPosition(int pos){
     position=pos;
}

int Player2::getPosition(){
     return position; 
}

