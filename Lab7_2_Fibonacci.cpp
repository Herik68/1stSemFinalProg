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
                cout<< fibonacci(i) << " ";
            }cout<<endl;
        }
    }while (x!=-1);
    
    return 0;
}

int fibonacci(int y){
    if(y<=1){
        return y;
    }
    else{
        int fibo=fibonacci(y-1)+fibonacci(y-2);
        return fibo;
    }
}