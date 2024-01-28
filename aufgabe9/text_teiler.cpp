#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
void datenNamen ();
void dateiÖffner (int jahrB, std::string fileName);
void zeilenTeiler(int jahrC);
void anzahlNameJahr();

class Person {
    public:
    std::string name;
    char geschlicht;
    int anzahl;
    int jahr;
};



std::vector<Person> people;
std::ifstream file;

//Funktion mit einen Schleife, um die Datennamen zu erstellen.
void datenNamen (){
        
        std::vector <std::string> datenNamenList;
        for (int i = 1880; i < 2023; i++){
            int anfangesJahr = i;
            std::string folge = "names/";
            std::string anfang = "yob";
            std::string mitte = std::to_string(anfangesJahr);
            std::string ende = ".txt";
            std::string dateiName = folge + anfang + mitte + ende;
            dateiÖffner (anfangesJahr, dateiName);
            file.close();
        }       
}

//Funktion, um die Daten zu öffnen.
void dateiÖffner (int jahrB, std::string fileName){
    file.open(fileName);
    if (!file.is_open()) {
    std::cerr << "Konnte die Datei nicht öffnen: " << fileName << std::endl;
    }
    zeilenTeiler(jahrB);
}

//Funktion, um die ganz Text zur Zeilen schniten und jeder Zeile wird auch zur Teilen 
/*void zeilenTeiler(int jahrC){
std::string zeile;
while (std::getline(file, zeile)){
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
        person.jahr = jahrC;
        people.push_back(person);
    } else{
            std::cerr << "Ungültiges Format in Zeile: " << zeile << std::endl;
        }
}
}*/
