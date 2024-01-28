#include <iostream>
#include <vector>
#include "text_teiler.hpp"

void menueAusgaben(){
    std::cout << "[1] Diagramm\n"
              << "[2] Überprüfe die Anzahl einen Name in einem Jahr\n"
              << "[3] Zeige der Wahrscheinlichkeit der Name als männlche oder weibliche Person\n";
}

void menueAbfragen(){
    menueAusgaben();

    int choice;
    std::cin >> choice;
    if(std::cin){
        auswahl( choice );
    }
    else{
        std::cerr << "Ungültige Wahl! Bitte wählen Sie nochmal." << std::endl;
        menueAbfragen();
    }
}

void auswahl (int choice){
    switch( choice ){
        case 1:
            digramm();
            break;
        case 2:
            anzahlNameJahr();
            break;
        case 3:
            wahrscheinlichkeit();
        
    }
}

void anzahlNameJahr(){
datenNamen ();
std::string eingegebeName;
    int eingegebenJahr;
    std::cout << "Giben Sie bitte einen Namen an: " << std::endl;
    std::cin >> eingegebeName;
    std::cout << "Giben Sie bitte ein Jahr an: " << std::endl;
    std::cin >> eingegebenJahr;
    std::vector <int> Anzahlen;
    std::vector <char> Geschlichte; 
    for ( auto& person : people) {
        if(person.name == eingegebeName && person.jahr == eingegebenJahr){
            Anzahlen.push_back(person.anzahl);
            Geschlichte.push_back(person.geschlicht);
        }
        /*else{
            std::cerr << "Der eingegebene Name ist nicht verfügbar in der DatenBank.\n"<<"Versuchen Sie bitte mit anderen Name.\n";
        }*/
    }
    
    std::cout << eingegebenJahr << " wurde der Vorname "<< eingegebeName << " " << Anzahlen[0] << " mal an Frauen vergeben, " << Anzahlen[1] << " mal an Männer."  << std::endl;
}