#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int rolldice(void);

int main(){
    srand(time(0));
    int sum,point,gamestatus;
    cout<<"Press enter to roll"<<endl;
    cin.get();// ask the user to touch a key to continue
    sum=rolldice();
    

    switch (sum)
    {
    case 7:
    case 11:
        gamestatus=1;
        break;
    case 2:
    case 3:
    case 12:
        gamestatus=2;
        break;
    
    default:
        gamestatus=3;
        point=sum;
        cout<<"Your Point is "<< point<< endl;
        break;
    }
    while (gamestatus==3)
    {
        cout<<"Press enter to roll"<<endl;
        cin.get();
        sum=rolldice();
        if(sum==point){
            gamestatus=1;
        }
        else if(sum==7){
            gamestatus=2;
        }
    }
    switch (gamestatus)
    {
    case 1:
        cout<<"You Win!"<<endl;
        break;
    case 2:
        cout<<"You Lose!"<<endl;
    default:
        break;
    }
    

    return 0;
}

int rolldice(void){
    int dice1=1+rand()%6,
        dice2=1+rand()%6,
        sum=dice1+dice2;
        cout<<"You got "<< dice1 << " + "<< dice2 <<" = "<< sum<<endl;
    return sum;
}