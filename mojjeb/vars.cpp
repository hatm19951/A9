#include <iostream>
using namespace std;


// Global Scope
int printAge();
int age= 10;
int handyNmuuer; // camel case
int HandyNummer; // pascal
int handy_nummer; // snake case


int main ()
{
        // local Scope
        age=10;
        int mobile = 123;
        string name;
        string country = "sssss";
        cout<< "What is your name?"<<endl;
        cin>> name;
        cout<< "Hallo " <<name<<endl;
        cout<< "Age is " << age << endl;
        cout<<"Mobile "<< mobile<< "\nh";
        printAge();

        return 0;
}

int printAge(){

cout << age << endl;
int age =13;
cout << age << endl;
return 0;
}
