#include <iostream>
#include <cstdlib>

using namespace std;

void drawDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;

    cout << "Enter the size (number of rows for the upper half): ";
    if (!(cin >> size)) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    if (size <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        drawDiamond(size);
    }
    cout << "\nProgram finished. ";
    system("pause"); 
    
    return 0;
}