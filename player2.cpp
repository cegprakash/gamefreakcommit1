#include"constants.h"
#include"player2.h"

void Player2::getmove (){  //Player2's implementation
     position=rand()%10;
}
void Player2::setPosition(int pos){
     this.position=pos;
}

int Player2::getPosition(){
     return this.position; 
}

