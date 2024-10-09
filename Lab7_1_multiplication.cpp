#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){
    srand(time(0));
    int x;
        cout<<"Enter -1 to End"<<endl;
    do{
        int a= rand()%9+1,
            b= rand()%9+1;
        cout<<"How much is "<< a<< " times "<<b<< " (-1 to End)? ";
        cin>> x;
        
        int correctans= a * b;// calculate the result and store it to check later with user calculation input
        
        if(x==-1){
            cout<<"That's all for now. Bye.";
        } 
        else if(x!=correctans){
            while(x!=correctans){//ask again and again the user calculation is correct
            cout<< " No.Try again. \n"<< a <<" times "<<b<<" is ? ";
            cin>>x;
            if(x==-1){// but if the user wants to quit, it should be able to stop
                cout<<"That's all for now. Bye.";
                break;
            }
            }cout<<"Very good"<<endl;//print this outside of the while loop which means the result is finally correct
        }
        else{// if the user calculation is already correct at first try
            cout<<"Very good"<<endl;
        }
        
        }while(x!=-1);
    

    return 0;
}