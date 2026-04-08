//Console-based calculator
#include<iostream>
using namespace std;
int main(){
    double p,q;
    char op;
    cout << "Enter the first number: ";
    cin >> p;
    cout << "Enter the second number: ";
    cin >> q;
    cout << "Enter the operator: ";
    cin >> op;
    if(int(op)==43){
        cout << "The Addition of " << p << " and " << q << " is: "
        << p+q << endl;
    }
    else if(int(op)==45){
        cout << "The difference between " << p << " and " << q << " is: "
        << p-q << endl;
    }
    else if(int(op)==42){
        cout << "The multiplication of " << p << " and " << q << " is: "
        << p*q << endl;
    }
    else if(int(op)==47){
        cout << "The division of " << p << " with " << q << " is: "
        << p/q << endl; 
    }
return 0;
}