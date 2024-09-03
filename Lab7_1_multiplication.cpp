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
        
        int correctans= a * b;
        
        if(x==-1){
            cout<<"That's all for now. Bye.";
        } 
        else if(x!=correctans){
            while(x!=correctans){
            cout<< " No.Try again. \n"<< a <<" times "<<b<<" is ? ";
            cin>>x;
            if(x==-1){
                cout<<"That's all for now. Bye.";
                break;
            }
            }cout<<"Very good"<<endl;
        }
        else{
            cout<<"Very good"<<endl;
        }
        
        }while(x!=-1);
    

    return 0;
}