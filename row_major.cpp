#include <iostream>
using namespace std;

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Row-major traversal (row by row)
    cout << "Row-major traversal (row by row):" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // Display memory addresses
    cout << "\nMemory addresses (each int takes 4 bytes):" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << "matrix[" << row << "][" << col << "] = "
                 << matrix[row][col]
                 << " at address " << &matrix[row][col] << endl;
        }
    }

    cout << "\nObservation: Addresses increase row by row (ROW-MAJOR ORDER)." << endl;

    // Step 6 Challenge: Column-major traversal
    cout << "\nColumn-major traversal:" << endl;
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 3; row++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}

