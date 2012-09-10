#include"constants.h"
#include"player1.h"

void Player1::getmove (){ //Player1's implementation
          position=rand()%10;
}

void Player1::setPosition(int pos){
     this.position=pos;
}

int Player1::getPosition(){
     return this.position;
}


