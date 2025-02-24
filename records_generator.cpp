#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


string generujNumerTel() {
    string numer;
    for (int i = 0; i < 9; i++) {
        numer += to_string(rand() % 10);  // hejka ja tu robie petle z ktorych dostane pewnie 3, bo nie umiem zagnieżdżonych
    }
    return numer;
}

int main() {
    // Dane do tablic, można nimi manipulować
    const char* imiona[] = {"Ola", "Jan", "Kasia", "Piotr", "Marek", "Anna", "Ewa", "Michał", "Tomek", "Kamil"};
    const char* nazwiska[] = {"Wiertara", "Nowak", "Kowalski", "Wiśniewski", "Zieliński", "Kaczmarek", "Lewandowski", "Szymański", "Woźniak", "Kamiński"};
    const char* miasta[] = {"Rabka-Zdrój", "Warszawa", "Kraków", "Wrocław", "Gdańsk", "Poznań", "Łódź", "Szczecin", "Białystok", "Lublin"};

    
    const int rozmiarImion = sizeof(imiona) / sizeof(imiona[0]);
    const int rozmiarNazwisk = sizeof(nazwiska) / sizeof(nazwiska[0]);
    const int rozmiarMiast = sizeof(miasta) / sizeof(miasta[0]);

    
    srand(time(0));

    
    int iloscRekordow;
    cout << "Podaj liczbę rekordów do wygenerowania: ";
    cin >> iloscRekordow;

    
    for (int i = 1; i <= iloscRekordow; i++) {
        
        string imie = imiona[rand() % rozmiarImion];
        string nazwisko = nazwiska[rand() % rozmiarNazwisk];
        string telefon = generujNumerTel();
        string miasto = miasta[rand() % rozmiarMiast];

        // Wypisywanie rekordów, można to dać do pliku .txt i import do accessa
        cout << i << ";" << imie << ";" << nazwisko << ";" << telefon << ";" << miasto << endl;
    }

    return 0;
}

