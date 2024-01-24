#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct Person {
    std::string name;
    char gender;
    int count;
};

int main() {
    
    std::string filename = "yob1881.txt";

    
    std::ifstream file(filename);
    std::vector <std::string> namen;
    std::vector <char> geschlichter;
    std::vector <int> anzahlen;


    
    if (!file.is_open()) {
        std::cerr << "Konnte die Datei nicht öffnen: " << filename << std::endl;
        return 1;
    }

    // Vektor, um Personenobjekte zu speichern
    std::vector<Person> people;

    // Zeile für Zeile die Datei lesen
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::vector<std::string> parts;

        // Tokenisierung der Zeile
        std::string part;
        while (std::getline(ss, part, ',')) {
            parts.push_back(part);
        }

        // Überprüfe, ob genügend Teile vorhanden sind
        if (parts.size() == 3) {
            // Erstelle eine Person-Struktur und speichere die Teile
            Person person;
            person.name = parts[0];
            person.gender = parts[1][0];
            person.count = std::stoi(parts[2]);

            // Füge die Person zum Vektor hinzu
            people.push_back(person);
        } else {
            std::cerr << "Ungültiges Format in Zeile: " << line << std::endl;
        }
    }

   
    file.close();

    
    for (const auto& person : people) {
        namen.push_back(person.name);
        geschlichter.push_back(person.gender);
        anzahlen.push_back(person.count);
    }

    std::cout << "Name: " << namen[5] << ", Gender: " << geschlichter[5] << ", Anzahl: " << anzahlen[5] << std::endl;
    return 0;
}