//Student Report Card Generator
#include<iostream>
using namespace std;
int total(int m1,int m2,int m3){
    int sum=m1+m2+m3;
    return sum;
}
float percentage(int m1,int m2,int m3){
    float percent=((m1+m2+m3)/300.0)*100.0;
    return percent;
}
string grade(int m1,int m2,int m3){
    float percent=((m1+m2+m3)/300.0)*100.0;
    string f_grade;
    if(percent>90){
        f_grade='O';
    }
    else if(percent>=80 && percent<=90){
        f_grade="A+";
    }
    else if(percent>=70 && percent<80){
        f_grade='A';
    }
    else if(percent>=60 && percent<70){
        f_grade="B+";
    }
    else if(percent>=50 && percent<60){
        f_grade='B';
    }
    else if(percent>=40 && percent<50){
        f_grade="C+";
    }
    else if(percent>=30 && percent<40){
        f_grade='C';
    }
    else if(percent>=20 && percent<30){
        f_grade='D';
    }
    else{
        f_grade='F';
    }
    return f_grade;
}
int main(){
    int marks1,marks2,marks3;
    cout << "Enter marks of first subject: " << endl;
    cin >> marks1;
    cout << "Enter marks of second subject: " << endl;
    cin >> marks2;
    cout << "Enter marks of third subject: " << endl;
    cin >> marks3;
    cout << "Total marks obtained are: " 
    << total(marks1,marks2,marks3) << endl;
    cout << "Percentage: " << percentage(marks1,marks2,marks3)
    << endl;
    cout << "The overall grade is: " << grade(marks1,marks2,marks3)
    << endl;
return 0;
}