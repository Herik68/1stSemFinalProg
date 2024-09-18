#include <iostream>
#include <iomanip>

using namespace std;

float mean(int [], int);
int median(int [], int);
void bubblesort(int [], int);
int mode(int [], int);

int main(){
	const int responseSize = 99;
	int respose[responseSize] = {
		6,7,8,9,8,7,8,9,8,9,
		7,8,9,5,9,8,7,8,7,8,
		6,7,8,9,3,9,8,7,8,7,
		7,8,9,8,9,8,9,7,8,9,
		6,7,8,7,8,7,9,8,9,2,
		7,8,9,8,9,8,9,7,5,3,
		5,6,7,2,5,3,9,4,6,4,
		7,8,9,6,8,7,8,9,7,8,
		7,4,4,2,5,3,8,7,5,6,
		4,5,6,1,6,5,7,8,7  };

	cout << "Mean = " << fixed << setprecision(2) << mean(respose, responseSize) << endl;
	cout << "Median = " << median(respose, responseSize) << endl;
	cout << "Mode = " << mode(respose, responseSize) << endl;

	return 0;
}

//Mean
float mean(int a[], int asize){
    float sum=0,avg;
    for(int i=0;i<asize;i++){
        sum+=a[i];
    }
    avg=sum/asize;
    return avg;
}

//Median
void bubblesort(int a[], int asize){//sort the array
    int swap,hold;
    do{
        swap=0;
        for(int i=0;i<asize-1;i++){
            if(a[i]>a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
                swap=1;
            }
        }
    }while(swap==1);
    }
int median(int a[], int asize){//calculate median
    bubblesort(a,asize);
    int medianNum=0;
	int firstMidNum=0,secondMidNum=0;
	for(int i=0;i<asize;i++){
    if(asize%2!=0){//if arraysize is odd number,we just have to divide it by two to get median
		if(i==asize/2){
        medianNum=a[i];
    }
	}
	else{
		if(i==asize/2){//if arraysize is even, we have to sum two middle num and divide by 2
        firstMidNum=a[i];
		secondMidNum=a[i+1];
		medianNum=(firstMidNum+secondMidNum)/2;
    }
	}
}
    return medianNum;
}

//Mode
int mode(int a[], int asize){
	int freq[asize]={};
	int modeNum,most=0;

	//get the frequencies for each num
	for(int i=0;i<asize;i++){
		freq[a[i]]++;
	}

	//if the frequency of a number greater than our most occurence num(most)
	for(int i=0;i<asize;i++){
		if(freq[i]>most){
			most=freq[i];//replace most by the frequency of this number
			modeNum=i; // assign this num as mode
		}
	}
	return modeNum;
};