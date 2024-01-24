#include <iostream>
using namespace std;

int main(){
    enum colors {red=22, blue, green, black};
    enum sizes {A4, A5};
    colors paperColor = red;
    sizes paperSize = A4;
    cout << paperColor << endl;
    cout << paperSize << endl;
    return 0;
}