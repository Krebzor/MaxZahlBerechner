#include <iostream>
using namespace std;

// Funktion zum Ermitteln der größten Zahl
int Maximum(int a, int b, int c) {
    int maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }

    if (c > maxVal) {
        maxVal = c;
    }

    return maxVal;
}

int main()
{
    char choice;

    do {
        // Deklarieren
        int ersteZahl = 0;
        int zweiteZahl = 0;
        int dritteZahl = 0;

        // Eingabe
        cout << "Zusammen werden wir herausfinden, welche von den drei Zahlen die höchste ist. Los geht's!" << endl;

        cout << "Geben Sie die erste Zahl ein: ";
        cin >> ersteZahl;

        cout << "Geben Sie die zweite Zahl ein: ";
        cin >> zweiteZahl;

        cout << "Geben Sie die dritte Zahl ein: ";
        cin >> dritteZahl;

        // Aufruf der Maximum-Funktion
        int hoechsteZahl = Maximum(ersteZahl, zweiteZahl, dritteZahl);

        // Ausgabe
        cout << "Die höchste Zahl ist: " << hoechsteZahl << endl;

        cout << "Möchten Sie eine weitere Berechnung durchführen? (j/n): ";
        cin >> choice;

    } while (choice == 'j' || choice == 'J');

    return 0;
}
