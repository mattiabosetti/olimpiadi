#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Macchina {
    public:
        int eta;
        string modello;
        Macchina(int x, string y){
            eta = x;
            modello = y;
        }

};

class Rettangolo {

    public:
        int base;
        int altezza;
        Rettangolo(int x, int y){
            base = x;
            altezza = y;
        }

        int perimetro(){
            return (base+altezza)*2;
        }

        int area(){
            return base*altezza;
        }

        double diagonale(){
            return sqrt(pow(base, 2) + pow(altezza, 2));
        }

};

class DueNumeri {
    public:
        int n1;
        int n2;
        DueNumeri(int x, int y) {
            n1 = x;
            n2 = y;
        };

        int somma(){
            return n1+n2;
        }

        int prodotto() {
            return n1*n2;
        }

};

int main() {
    Macchina macchina1(65, "BMW");
    Macchina macchina2(20, "Porsche");

    cout << macchina1.eta << endl;
    cout << macchina1.modello << endl;
    cout << macchina2.eta << endl;
    cout << macchina2.modello << endl;

    DueNumeri duenumeri1(12, 14);
    int somma = duenumeri1.somma();
    int prodotto = duenumeri1.prodotto();

    cout << somma << endl;
    cout << prodotto << endl;
    int base;
    int altezza;

    cout << "\nInserisci la base e l'altezza del rettangolo: ";
    cin >> base;
    cin >> altezza;

    Rettangolo rett1(base, altezza);
    cout << rett1.perimetro() << endl;
    cout << rett1.area() << endl;
    cout << rett1.diagonale() << endl;

    return 0;
}