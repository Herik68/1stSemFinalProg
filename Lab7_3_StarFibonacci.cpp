#include <iostream>
using namespace std;
int fibonacci(int);


int main(){
    int x;
    do{
        cout<<"Enter the number of Fibonacci sequence (-1 to End ): ";
        cin>>x;
        if(x==-1){
            break;
        }
        else{
            for(int i=0;i<x;i++){
                for(int j=0;j<fibonacci(i);j++){
                    cout<<"*";
                }cout<<endl;
            }
        }
    }while (x!=-1);
    
    return 0;
}

int fibonacci(int y){
    if(y<=1){// if y=0 or 1 , give back the original value 0 and 1
        return y;
    }
    else{
        return fibonacci(y-1)+fibonacci(y-2);// start calculationg from 2=1+0
    }
}