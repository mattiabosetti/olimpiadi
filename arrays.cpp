#include <iostream>
#include <string>
using std::cout;
using std::cin;

int main() {
    std::string letters[2][2][2] = {
  {
    { "A", "B" }, // [vettore][riga][colonna]
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
    int numeri[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << letters[1][1][0] << "\n**************\n";
    cout << numeri[1][1] << "\n**************\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters[i][j][k] << "\n";
            }
        }
    }


    return 0;
}