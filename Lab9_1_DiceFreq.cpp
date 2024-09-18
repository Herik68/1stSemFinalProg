#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int frequency[6]={};
    int face;
    for(int i=0;i<6000;i++){
        face=rand()%6;
        frequency[face]++;
    }
    cout<<setw(8)<<"Face"<<setw(13)<<"Frequency"<<endl;
    for(int i=1;i<=6;i++){
        cout<<setw(8)<< i <<setw(13)<< frequency[i-1]<<endl;
    }
    
    
       
    return 0;
}
