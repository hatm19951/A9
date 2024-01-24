#include <iostream>
using namespace std;
//OOP - Object Oriented Programming

class Person {
    public:
    string name; //attribute
    string gender;
    int yob;

    void introduceSelf(){
        cout << "Hello my name is " << name <<endl;
        cout << "and I am " << age << " years old" << endl;
    }

    /*void setAge(int personAge){
        age = personAge;
    }*/
    void setIncome(int personIncome){
        income = personIncome;
    } 
    int getAge(){
        int age = 2024 - yob;  
        if(gender == "male"){
            return age;
        }
        else{
             return 0;   
        }
    }
    int getIncome(){
        if(gender == "female"){
            return income;
        }else{
            return 0;
        }
    }

    private:
    int age;
    int income;
};

int main(){
    Person student;
    student.name = "Ali";
    student.gender = "male";
    student.yob = 1999;
    //student.setAge(21);
    cout << student.getAge() << endl;
    //student.age = 21;

    /*Person* teacher = new Person;
    teacher->name = "Abdulmogeeb";
    teacher->age= 11;*/

    //student.introduceSelf();
    //teacher->introduceSelf();

    


    //delete teacher;
    return 0;
}