#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calVol(float , float );

int main(){
    float r=0,h=0;
    char more;
    do{
        cout<<"Please enter radius and height of a cylinder: ";
        cin>>r>>h;
        
        while(r<0 || h< 0){
            cout<<"Invalid Input. Try Again."<<endl;
            cout<<"Please enter radius and height of a cylinder: ";
            cin>>r>>h;
        }
        if(r==0){
            r=2;
        }
        if(h==0){
            h=2;
        }

        cout<<"The volume of the cylinder is "<< fixed << setprecision(3)<<calVol(r,h)<<endl;
        cout<<"Would u like to continue?(Press Y) ";
        cin>>more;
    }while(more == 'Y');
    cout<<"Good Bye!";
    return 0;
}

float calVol(float a=2, float b=2){
    return M_PI * pow(a,2) * b;
}
