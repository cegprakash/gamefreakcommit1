#include "constants.h"


int main(){
    
    Player1 p1; Player2 p2;
    
    int i,x;
    for(i=0;i<5;i++)
    {
     x=p1.getmove();
     cout<<x<<" ";
     x=p2.getmove();
     cout<<x<<endl;
    }
    
    getchar();
    getchar();
    return 0;   
}
