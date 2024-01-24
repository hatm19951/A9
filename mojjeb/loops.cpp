#include <iostream>
using namespace std;

//goto
/*int main(){
//2.Bsp
    int x;
    enterNumber:
        cout << "Enter a number > 0: ";
        cin >> x;
    if(x <= 0){
        goto enterNumber;
    }

 //1.Bsp
    int x = 0;
    increase:
        cout << x << endl;
        x++;
    
    if (x < 10){
        goto increase;
    }


    return 0;
}*/

//while
/*int main(){
    int y = 0;
    cin >> y;
    while (y <= 10){
        cout << "Please enter a valid number >= 10 ";
        cin >> y;
    }
     
return 0;
}*/

//do, while الفرق بينها وبين الوايل لحال انو هين يشتغل الشرط والو لمرة واحدة فقط
/*int main(){
    int y = 11;
    do {
        cout << y << endl;
        y++;

    } while (y < 10);
        
    
     
return 0;
}*/

// for
/*int main(){
    const int size = 3;
    int numbers [size] = {11, 22, 33};

    for(int index = 0; index < size; index++){
        cout << numbers[index] << endl;
    }
return 0;
}*/

//range-based for 
/*int main(){
    const int size = 3;
    int numbers [size] = {11, 22, 33};
    char message [5] = {'H', 'E', 'L', 'L', 'O'};

    for(char letter: message){
        cout << letter;
        if(letter == 'O'){
            cout << endl; 
        }
    }

    //for(int number: numbers){
        cout << number << endl;
    }

return 0;
}*/


//الايقاف والتخطي في التكرار باستخدام break & continue
/*int main(){
    const int size = 3;
    int numbers [size] = {11, 22, 33};
    char message1 [8] = {'H', 'E', 'L', 'L', 'O', ';', 'B'};
    char message2 [7] = {';', 'H', 'E', ';', 'L', 'L', 'O'};

    for(char letter1: message1){
        
        // Hallo
        /*if(letter1 == ';'){
           break; 
        }
        cout << letter1;

        // Hallo;
        /*cout << letter1;
        if(letter1 == ';'){
           break;

        }
        
        // HELLOB
        /*if(letter1 == ';'){
           continue; 
        }
        cout << letter1;

        //HELLO;B
        /*cout << letter1; 
        if(letter1 == ';'){
           continue; 
        }

    


    }

    

return 0;
}*/

//التكرار المتكرر "أو الشبكي" nested for
/*int main(){
    const int size = 3;
    int numbers [size] = {11, 22, 33};
    char message1 [8] = {'H', 'E', 'L', 'L', 'O', ';', 'B'};
    char message2 [7] = {';', 'H', 'E', ';', 'L', 'L', 'O'};
    
    //for
    int rowsNum = 2;
    int columsNum = 3;
    int solar[rowsNum] [columsNum] = {
        {101, 102, 103},
        {201, 202, 203},
    };

    for (int x = 0; x < rowsNum; x++){
        for(int y = 0; y < columsNum; y++){
           cout << solar[x] [y] << endl; 
        }
    }
    

    //While
    int x = 0;
    while (x < 3){

        int y = 0;
        while (y < 3){
            cout << x << "..." << y << endl;
            y++;
        }
        
        x++;
    }
    

return 0;
}*/