#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string angegebenName;

int main(){
   


fstream myFile;
myFile.open("yob1881.txt", ios::in);
string line;
vector<string> lines;

//lines von dem Datei speicheren in eine Tabelle
int lineAnzahl=0;
while(!myFile.eof()){
    getline(myFile,line);
    lines.push_back(line);
    lineAnzahl++;
}
    myFile.close();

//Frage nach einen Name
cout << "Geben Sie bitte einen Name an: ";
cin >> angegebenName;

// Schleife, um die Name zu finden und Anzahl von de Name bestimmen
for(int i=0; i<lineAnzahl ;i++){
    int wortVorAnzahl = angegebenName.length()+3;
    size_t nameSuchen = lines[i].find(angegebenName, 0);

    if(nameSuchen != string::npos){

    lines[i].erase(nameSuchen, wortVorAnzahl);
    cout << lines[i] << endl;
    }
} 
return 0;

}