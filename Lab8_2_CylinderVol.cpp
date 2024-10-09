#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calVol(float a=2, float b=2);//set the default value

int main(){
    float r=0,h=0;
    char more;
    do{
        cout<<"Please enter radius and height of a cylinder: ";
        cin>>r>>h;
        
        while(r<0 || h< 0){ //if radius and height less than 0, it is invalid and request the input again
            cout<<"Invalid Input. Try Again."<<endl;
            cout<<"Please enter radius and height of a cylinder: ";
            cin>>r>>h;
        }
        if(r==0){// if radius is zero, change it to 2
            r=2;
        }
        if(h==0){// if height is zero, change it to 2
            h=2;
        }

        cout<<"The volume of the cylinder is "<< fixed << setprecision(3)<<calVol(r,h)<<endl;
        cout<<"Would u like to continue?(Press Y) ";
        cin>>more;
    }while(more == 'Y'|| more== 'y');
    cout<<"Good Bye!";
    return 0;
}



float calVol(float a, float b){
    float volume = M_PI * pow(a,2) * b;
    return volume;
}
