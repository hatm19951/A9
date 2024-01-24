#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int textSpeichern ();

struct Person {
    string name;
    char geschlicht;
    int anzahl;
};

int main(){
vector<Person> zeilen;
vector <string> namen;
vector <char> geschlichter;
vector <int> anzahlen;
vector<Person> people;

//Zeilen von dem Datei speicheren in eine Tabelle
fstream myFile;
    myFile.open("yob1881.txt", ios::in);
    string line;
    int lineAnzahl=0;
    while(!myFile.eof()){
        getline(myFile,line);
        zeilen.push_back(line);
        lineAnzahl++;
    }
    myFile.close();


    string input = zeilen[];
    istringstream ss(input);
    vector<string> parts;
    string part;
        while (getline(ss, part, ',')) {
        parts.push_back(part);
        
        }
            
        if (parts.size() == 3) {
       
        Person person;
        person.name = parts[0];
        person.geschlicht = parts[1][0]; 
        person.anzahl = stoi(parts[2]);  

        namen.push_back(person.name); 
        geschlichter.push_back(person.geschlicht);
        anzahlen.push_back(person.anzahl); 

        }

    
        cout << "Name: " << namen[0] << endl;
        cout << "Geschlicht: " << geschlichter[0] << endl;
        cout << "anzahl: " << anzahlen[0] << endl;
    return 0;
}



