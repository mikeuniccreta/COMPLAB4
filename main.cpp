#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_COLUMN = 5;
const int MAX_ROW = 6;

void printMatrix(int matrix[][MAX_COLUMN]) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < MAX_ROW; ++i) {
        for (int j = 0; j < MAX_COLUMN; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void fillWithRandom(int matrix[][MAX_COLUMN]) {
    srand(time(NULL));
    for (int i = 0; i < MAX_ROW; ++i) {
        for (int j = 0; j < MAX_COLUMN; ++j) {
            matrix[i][j] = rand() % 100; // Random numbers between 0 and 99
        }
    }
    cout << "Matrix filled with random numbers." << endl;
}

int sumOfColumn(int matrix[][MAX_COLUMN], int column) {
    int sum = 0;
    for (int i = 0; i < MAX_ROW; ++i) {
        sum += matrix[i][column];
    }
    return sum;
}

int main() {
    int matrix[MAX_ROW][MAX_COLUMN];

    int choice;
    do {
        cout << "\nMENU:" << endl;
        cout << "1) Print Matrix" << endl;
        cout << "2) Fill with Random Numbers" << endl;
        cout << "3) Sum of Column" << endl;
        cout << "8) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            printMatrix(matrix,MAX_ROW);
            break;
        case 2:
            fillWithRandom(matrix);
            break;
        case 3: {
            int column;
            cout << "Enter column number [0-" << (MAX_COLUMN - 1) << "]: ";
            cin >> column;
            if (column >= 0 && column < MAX_COLUMN) {
                cout << "Sum of column " << column << ": " << sumOfColumn(matrix, column) << endl;
            }
            else {
                cout << "Invalid column number!" << endl;
            }
            break;
        }
        case 8:
            cout << "Exiting... Have a nice day " << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 8);

    return 0;
}
