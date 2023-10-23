#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Rettangolo { // creo la classe Rettangolo

    public:
        int base;           //dichiaro le variabili della classe
        int altezza;
        Rettangolo(int x, int y){   // construtto Rettangolo, x e y sono inseriti dall'utente e vengono assegnate alle due variabili dichiarate prima
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

int main(){


    Rettangolo rett1(12, 15);
    cout << rett1.perimetro() << endl;  // chiama le funzioni della classe 
    cout << rett1.area() << endl;
    cout << rett1.diagonale() << endl;

    return 0;
}