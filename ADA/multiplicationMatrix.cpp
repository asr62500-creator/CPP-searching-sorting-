#include<iostream>
using namespace std;

int main ( ) {
    int a[3][3], b[3][3], c[3][3];
    cout << "Enter the elements of first matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the elements of second matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                c[i][j] = c[i][j]+a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result of multiplication: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}