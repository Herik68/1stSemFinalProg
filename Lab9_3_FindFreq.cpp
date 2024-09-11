#include <iostream>
using namespace std;

int main(){
    int c[5],search,count=0;
    cout<<"Enter 10 values: ";
    for(int i=0;i<10;i++){
            cin>>c[i];
    }

    cout<<"Value in array are now: ";
    for(int i=0;i<10;i++){
            cout<<c[i]<<" ";
    }cout<<endl;

    cout<<"Enter value to find: ";
    cin>> search;

    for(int i=0;i<10;i++){
        if(c[i]==search){
            count++;
        }
    }cout<<endl;

    cout<<search<< " was found "<< count << " times. "<< endl;




    
       return 0;
}