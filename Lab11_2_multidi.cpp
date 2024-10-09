#include <iostream>
using namespace std;

const int students=3,exams=4;//arraySizes declared before the main 
                            // as we need to use the variable exams in the function prototype
int minimum(int [][exams],int ,int );// the second [](columnname) must be included
int maximum(int [][exams],int ,int );
double average(int[],int);
int main(){
    int studentGrades[students][exams]={{77,68,86,73},
                                        {96,87,89,78},
                                        {70,90,86,81}
    };
    cout<<"Lowest grade: "<< minimum(studentGrades,students,exams)<<endl;
    cout<<"Highest grade: "<< maximum(studentGrades,students,exams)<<endl;

    for(int i=0;i< students;i++){
        cout<<"The average grade for student "<<i+1<<" is "<< average(studentGrades[i],exams)<< endl;
    }
}

//Functions

//Minimum
int minimum(int grades[][exams],int students,int exams){
    int lowest;
    for(int i=0;i<students;i++){
        for(int j=0;j<exams;j++)
        if((i==0 && j==0) || grades[i][j]<lowest){//make the first num lowest and set everything lower than it to lowest
            lowest=grades[i][j];
        }
    }
    return lowest;
}

//Maximum
int maximum(int grades[][exams],int students,int exams){
    int highest;
    for(int i=0;i<students;i++){
        for(int j=0;j<exams;j++)
        if((i==0 && j==0)||grades[i][j]>highest){//make the first num highest and set everything higher than it to highest
            highest=grades[i][j];
        }
    }
    return highest;
}

//Average
double average(int grade[],int exams){
    double sum=0;
    for(int i=0;i<exams;i++){
        sum+=grade[i];
    }
    return sum/exams;

}