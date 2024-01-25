#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::string datenNamen (int platzVonList);
void dateiÖffner (int i);
void zeilenTeiler(std::string fileName);
std::vector<Person> people;

class Person {
    public:
    std::string name;
    char geschlicht;
    int anzahl;
    int jahr;
};

std::vector<Person> people;

//Funktion mit einen Schleife, um die Datennamen zu erstellen.
std::string datenNamen (int platzVonList){
        std::vector <std::string> datenNamenList;
        for (int i = 1880; i < 2023; i++){
            int anfangsjahr = i;
            std::string folge = "names/";
            std::string anfang = "yob";
            std::string mitte = std::to_string(anfangsjahr);
            std::string ende = ".txt";
            std::string dateiName = folge + anfang + mitte + ende;
            datenNamenList.push_back(dateiName);
        }
        std::string dateiName = datenNamenList[platzVonList];
        return dateiName;
}

//Funktion, um die Daten zu öffnen.
void dateiÖffner (int i){
    std::ifstream file(datenNamen(i));
    if (!file.is_open()) {
    std::cerr << "Konnte die Datei nicht öffnen: " << datenNamen(i) << std::endl;
    }   
}

//Funktion, um die ganz Text zur Zeilen schniten und jeder Zeile wird auch zur Teilen 
void zeilenTeiler(int i){
std::string zeile;
while (std::getline(datenNamen(i), zeile)){
    std::istringstream ss(zeile);
    std::vector<std::string> einzelTeilen;
    std::string teil;
    while (std::getline(ss, teil, ',')){
        einzelTeilen.push_back(teil);
    }
    if (einzelTeilen.size() == 3) {
        Person person;
        person.name = einzelTeilen[0];
        person.geschlicht = einzelTeilen[1][0];
        person.anzahl = std::stoi(einzelTeilen[2]);
        person.jahr = i;
        people.push_back(person);
    } else{
            std::cerr << "Ungültiges Format in Zeile: " << zeile << std::endl;
        }
}
}

int main(){
for(int i=0; i < 143; i++){
   datenNamen (i);
   dateiÖffner (i);
   //zeilenTeiler( datenNamen(i) );
}


}
