#include <iostream>
using namespace std;

int main(){
    //This block contains two loops for the first 10 rows
    for (int i = 0; i < 10; i++) {

        for (int j = 9; j >= i && j > 1; j--) {
            cout << "*" << "  ";
        }

        for (int k = i + 1; k > 3; k--) {
            cout << "   ";
        }

        for (int l = i + 1; l > 1; l--) {
            cout << "   ";
        }

        for (int m = i + 1; m <= 10; m++) {
            cout << "*" << "  ";
        }
        cout << endl;
    }

    // This block contains other two loops for the last 9 rows

    for (int i = 9; i > 0; i--) {

        for (int j = 9; j >= i - 1 && j > 1; j--) {
            cout << "*" << "  ";
        }

        for (int k = i; k > 3; k--) {
            cout << "   ";
        }

        for (int l = 1; l < i; l++) {
            cout << "   ";
        }

        for (int m = i; m <= 10; m++) {
            cout << "*" << "  ";
        }
        cout << endl;
    }

    return 0;
}
