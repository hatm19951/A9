#include <iostream>
int main(){
    using namespace std;
    string name = "Abdulmogeeb";

    for(int place = 0; place < name.length() ; place++){
        cout << place << "..." << name [place] << endl;
        }

    return 0;
}