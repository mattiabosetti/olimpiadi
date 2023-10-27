#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomePaese, regione;
    int eta;

    cout << "Inserisci il nome del paese: ";
    cin >> nomePaese;

    if (nomePaese == "Italia" || nomePaese == "italia") {
        cout << "Hai inserito Italia. ";
    } else {
        cout << "Non puoi votare in " << nomePaese << "\n Negro di merda!";
        return 0;
    }

    cout << "Inserisci la regione di origine (Nord o Sud): ";
    cin >> regione;

    if (regione == "Sud") {
        cout << "Sei nella regione Sud !!!Terrone!!! e non puoi votare! ";
    } else {
        cout << "Inserisci l'età del cittadino: ";
        cin >> eta;

        if (eta >= 18) {
            cout << "Hai almeno 18 anni e puoi votare. ";
        } else {
            cout << "Non hai l'età minima per votare. ";
        }
    }

    return 0;
}