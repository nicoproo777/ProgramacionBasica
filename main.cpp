#include <iostream>
using namespace std;

int main() {
    int n = 4; // número de líneas crecientes

    // Parte superior (1, 3, 5, 7)
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }

    // Parte inferior (5, 3, 1)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}

