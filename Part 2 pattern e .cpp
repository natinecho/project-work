//code that accept number of column from user

#include <iostream>
using namespace std;

int main(){
    //This block contains two loops for the first 10 rows
    int  n;
    cout <<"enter number of colunm";
    cin>>n;
    for (int i = 0; i < (n/2)+1; i++) {

        for (int j = n/2; j >= i && j > 1; j--) {
            cout << "*" << "  ";
        }

        for (int k = i + 1; k > 3; k--) {
            cout << "   ";
        }

        for (int l = i + 1; l > 1; l--) {
            cout << "   ";
        }

        for (int m = i + 1; m <= (n/2)+1; m++) {
            cout << "*" << "  ";
        }
        cout << endl;
    }

    // This block contains other two loops for the last 9 rows

    for (int i = (n/2); i > 0; i--) {

        for (int j = n/2; j >= i - 1 && j > 1; j--) {
            cout << "*" << "  ";
        }

        for (int k = i; k > 3; k--) {
            cout << "   ";
        }

        for (int l = 1; l < i; l++) {
            cout << "   ";
        }

        for (int m = i; m <= (n/2)+1; m++) {
            cout << "*" << "  ";
        }
        cout << endl;
    }

    return 0;
}

//a code that doesn't accept number of row from the user

/* #include <iostream>
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
}  */
