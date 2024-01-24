#include <iostream>
using namespace std;

enum citys {Leipzig, Dresden, Berlin};
void printMassage(string message);
int calculateAge (int geburtsJahr);
bool canDrive(int geburtsJahr, citys city);
int main(){
    printMassage("Hallo");

    if (canDrive(2000, Leipzig)){
        printMassage("You can drive");
    }
    else{
        printMassage("Sorry you can't drive");
    }
    return 0;
}

void printMassage(string message){
    cout << message << endl;
}

int calculateAge (int geburtsJahr){
    int age = 2021 - geburtsJahr;
    return age;
}

/*bool canDrive(int geburtsJahr, string city){
    if(calculateAge(geburtsJahr) >= 18 && city =="Leipzig"){
        return true;
    }
    else{
        return false;
    }
}*/
bool canDrive(int geburtsJahr, citys city){
    bool isCaptial;
    switch (city)
    {
    case Leipzig:
        isCaptial = true;
        break;
    
    default:
        isCaptial = false;
        break;
    }

    if (calculateAge(geburtsJahr) >= 18 && isCaptial){
        return true;
    }
    else{
        return false;
    } 


}