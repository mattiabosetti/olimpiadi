#include <iostream>
#include <fstream>

using namespace std;
int main() {

    ofstream file("programma.cpp");     // genera un file chiamato programma.cpp e inserisce la stringa data
    file << "#include <iostream>\n#include <math.h>\n#include <string>\nusing namespace std;\n\nint main(){\n\n\n   return 0;\n}";
    file.close();

    string testo;

    ifstream file1("programma.cpp");    // legge e stampa il file riga per riga con getline()
    while(getline(file1, testo)) {
        cout << testo << endl;
    }

    file1.close();


    return 0;
}