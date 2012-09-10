#include<cstdlib>

class Player1{
public:      
      int position;
      Player1();
      void getmove();
      int getPosition();
      void setPosition(int pos);
};

Player1::Player1()
{
     position=-1;
}

void Player1::getmove (){ 
          position=rand()%100;
}

void Player1::setPosition(int pos){
     position=pos;
}

int Player1::getPosition(){
     return position;
}
