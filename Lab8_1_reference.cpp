#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void tripleCallByValue(int );
void tripleCallByReference(int &);// & = pass by reference

int main(){
    int x;
    cout<<"Enter an integer: ";
    cin>>x;

    cout<<"Value before call to tripleCallByValue() is : "<< x<<endl;
    tripleCallByValue(x);
    cout<< "Value (in main) after tripleCallByValue() is : "<< x<< endl<<endl;



    cout<<"Value before call to tripleCallByReference() is : "<< x<<endl;
    tripleCallByReference(x);
    cout<< "Value (in main) after tripleCallByReference() is : "<< x<< endl;
}

void tripleCallByValue(int a){
    int y=a*3;
    cout<< "Value returned from tripleCallByValue() is : "<<y<<endl;
}

void tripleCallByReference(int &a){//&a
    a*=3;
}