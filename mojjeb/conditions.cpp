#include <iostream>
using namespace std;

//if, else
/*int main(){
    
    int age =14;
    string name = "Ali";
    bool hungry = true;
    bool vegan = true;
            if (age > 12 && name == "Ali"){
            cout << "Welcome"<< endl;
                    if(hungry){
                        if(vegan){
                          cout << "Go out" << endl;  
                        }
                        else{cout << "Go to kitchen" << endl;
                        }
                    }
                    else {
                    cout << "Go to livingroom" << endl;
                    } 
            }
            else {
            cout << "Sorry, go Back!" << endl;
            }
return 0;
}*/

//else if
/*int main(){
    int age =14;
    string name = "Al";
    bool hungry = false;
    bool vegan = false;

    if (name == "Ali"){
        cout << "Welcome" << endl;
    }
    else if(hungry){
        cout << "Go to kitchen" << endl;
    }
    else if(vegan){
        cout << "Go out" << endl;
    }
    else{
        cout << "اي وبعدين معاك" << endl;
    }
    return 0;
}*/

//switch, case
/*int main(){
    int age =14;
    string name = "Ali";
    bool hungry = true;
    bool vegan = true;
    bool canAccess = false;

    enum daysOfWeek {sun, mon, tue, wed, thu, fri, sat};
    daysOfWeek today = mon;

    switch(today) {
        case sun:
            cout << "Come in, this is a working day" << endl;
            break;
        case sat:
            cout << "This is a weekend" << endl;
            break;
    }

    switch(age){
        case 14:
            canAccess = true;
            break;
        case 18:
            canAccess = false;
            break;
    }

    if(canAccess){
        cout << "Welcome to the Club" << endl;
    }
    return 0;
}*/

//switch, case, default
/*int main(){
    enum daysOfWeek {sun, mon, tue, wed, thu, fri, sat};
    daysOfWeek today = fri;

    switch(today) {
        case fri:
            cout << "This is a weekend" << endl;
            break;
        case sat:
            cout << "This is a weekend" << endl;
            break;
        default:
            cout << "We work today" << endl;

    }

    return 0;
}*/

// ternary operator, او شرط ثلاثي اختصار if else
int main(){
    int age =20;
    string name = "Al";
    bool hungry = true;
    bool vegan = true;
    bool canAccess = age >= 18 ? true : false;

    /*if (age >= 18){
        canAccess = true;
    }
    else{
        canAccess = false; 
    }*/

    if (canAccess){
        cout << "Welcome" <<endl;
    }
    else{
        cout << "Sorry" <<endl;
    }
 return 0;
}