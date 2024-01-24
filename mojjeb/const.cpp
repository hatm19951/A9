#include <iostream>
using namespace std;

// um eine Var festzulegen
const string message = "Hallo";
string name;

// um einen Ergibnisse von Information zu speichern 
constexpr int getAge(){return 12+12;}

int main(){

    
    name = "Hatem";
    cout << message << " " << name << "\n" << getAge() <<"\n";

    return 0;
}