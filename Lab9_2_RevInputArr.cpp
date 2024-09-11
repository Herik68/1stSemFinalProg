#include <iostream>
using namespace std;

int main(){
    int userc[5];
    for(int inputcount=0;inputcount<5;inputcount++){
            int x,index;
            cout<<"Enter a number: ";
            cin>>x;
            cout<<"Enter index: ";
            cin>>index;
            userc[index]=x;
    }
    cout<<"User array elements: ";
    for(int i=0;i<5;i++){
        cout<< userc[i]<< " ";
    }cout<<endl;

    cout<<"Reversed array element: ";
    for(int i=4;i>=0;i--){
        cout<< userc[i]<< " ";
    }cout<<endl;



    
       return 0;
}