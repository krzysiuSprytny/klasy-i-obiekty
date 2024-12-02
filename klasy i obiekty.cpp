#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Uczen {
private:
    string imie;
    string nazwisko;
    string klasa;
    int rocznik;
    vector<float> oceny; // Zmieniono tablicę na wektor

public:
    // Konstruktor
    Uczen(string name, string surname, string className, int year)
        : imie(name), nazwisko(surname), klasa(className), rocznik(year) {}

    // Metoda do wyświetlania danych ucznia
    void showStudentInfo() {
        cout << "Imie: " << imie << "\n"
                  << "Nazwisko: " << nazwisko << "\n"
                  << "Klasa: " << klasa << "\n"
                  << "Rocznik: " << rocznik << "\n";
    }

    // Metoda do dodawania oceny
    void addGrade(float ocena) {
        oceny.push_back(ocena);
    }

    // Metoda do wyświetlania ocen
    void showGrades() {
        cout << "Oceny: ";
        for (float ocena : oceny) {
            cout << ocena << " ";
        }
        cout << "\n";
    }
};

int main() {
    // Tworzenie obiektu ucznia
    Uczen uczen1("Jan", "Kowalski", "3A", 2005);

    // Wyświetlenie informacji o uczniu
    uczen1.showStudentInfo();

    // Dodanie ocen
    uczen1.addGrade(4.5);
    uczen1.addGrade(3.0);
    uczen1.addGrade(5.0);

    // Wyświetlenie ocen
    uczen1.showGrades();

    return 0;
}