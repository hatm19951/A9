#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class Person {
public:
    std::string name;
    char gender;
    int count;
    int jahr;
};

int main() {
// Vektor, um Personenobjekte zu speichern
    std::vector<Person> people;
for(int i=1880; i<2023; i++) {
    int jahr = i;
    std::string mitte = std::to_string(jahr);
    std::string anfang = "yob";
    std::string ende = ".txt";
    std::string folge = "names/";
    std::string dateiName = folge + anfang + mitte + ende;



    std::ifstream file(dateiName);
    if (!file.is_open()) {
        std::cerr << "Konnte die Datei nicht öffnen: " << dateiName << std::endl;
        return 1;
    }


    // Zeile für jeder Zeile die Datei lesen
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::vector<std::string> parts;

        // Tokenisierung der Zeile
        std::string part;
        while (std::getline(ss, part, ',')) {
            parts.push_back(part);
        }


        if (parts.size() == 3) {
            // Erstelle eine Person-Struktur und speichere die Teile
            Person person;
            person.name = parts[0];
            person.gender = parts[1][0];
            person.count = std::stoi(parts[2]);
            person.jahr = i;

            people.push_back(person);
        } else {
            std::cerr << "Ungültiges Format in Zeile: " << line << std::endl;
        }
    }


    file.close();
    }

    std::string angegbenName;
    int angegebenJahr;
    std::cout << "Giben Sie bitte einen Namen an: " << std::endl;
    std::cin >> angegbenName;
    std::cout << "Giben Sie bitte ein Jahr an: " << std::endl;
    std::cin >> angegebenJahr;
    int gesamtAnzahl;
    for ( auto& person : people) {
        if(person.name == angegbenName && person.jahr == angegebenJahr){
            std::cout << person.gender << "," << person.count<<","<< person.jahr<< std::endl;
            gesamtAnzahl = gesamtAnzahl + person.count;

        }

    }
    std::cout << gesamtAnzahl << std::endl;

    return 0;
}