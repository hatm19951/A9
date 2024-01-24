#include <iostream>
using namespace std;


int main(){

    // one diraction arrays
    int cells [4] = {12, 33, 21, 17};
    //cout << cells [0] << endl;
    //cout << cells [3] << endl;

    // multi diraction arrays
    int panalCells [2] [3] = {  {1, 5, 2},
                                {5, 4, 9}  };

    //cout << panalCells [0] [2] << endl;

    int rooms [2]= {};
    rooms [0] = 101;
    rooms [1] = 102;
    cout << rooms [0] << endl;
    return 0;
}