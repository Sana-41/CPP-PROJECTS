//Simple Login Authentication System
#include<iostream>
using namespace std;
class Credentials{
      public:
      string username="sunflower0825";
      string password="Rosesarered@#0934";
};
int main(){
      string u;
      cout << "Enter username: ";
      cin >> u;
      string p;
      cout << "Enter password: ";
      cin >> p;
      Credentials Credentials1;
      if(Credentials1.username!=u && Credentials1.password!=p){
            cout << "Invalid Login" << endl;
      }
      else if(Credentials1.username==u && Credentials1.password==p){
            cout << "Login Successful!" << endl;
      }
      else if(Credentials1.username!=u){
            cout << "Usernames do not match." << endl;
      }
      else if(Credentials1.password!=p){
            cout << "Passwords do not match." << endl;
      }
return 0;
}