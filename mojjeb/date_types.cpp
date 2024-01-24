#include <iostream>
using namespace std;

int main(){
    bool isOn = true; // true, false
    char location = 'A'; // only single char


    // 0 to 65,535 // 65536
    unsigned short int counter;

    //-32768 to 32768
    short int counter2;

    // 0 to 4,294,987.295
    unsigned long int counter3;

    //-2,147,483,648 to 2,147,483,647
    long int counter4;

    // 0 to 18,446,744,073.709.551.615
    unsigned long long counter5;

    // -9.223.372,036,854,775,808 to 9,223.372,036,854,775,807
    long long counter6;

    // 32,768 to 32,767
    int int1;

    //0 to 65,535
    unsigned int int2;

    //1.2e-38 to 3.4e38
    float float1;

    //2.2e-3.8 to 1.8e308
    double double1;


    int age = 12;

    /*cout << "\n" << sizeof(long long) << "\n"; // so kann man die Große von Daten Typ wissen.*/

    // auto Date Types
    auto year = 2000;
    auto city = "leipzig";

    // Verkrüzung Date Type mit "typedef"
    typedef unsigned long long ull;
    ull x = 12222233;
    return 0;






}