#include <iostream>
using namespace std;

int main() {
   //завдання 1
    int rows, cols, startValue;

    cout << "Enter the number of strings of the array: ";
    cin >> rows;
    cout << "Enter the number of array columns: ";
    cin >> cols;
    cout << "Enter the starting number: ";
    cin >> startValue;

    int arr[rows][cols];

    arr[0][0] = startValue;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 && j == 0) {
                continue;
            }

            if (j == 0) {             
                arr[i][j] = arr[i - 1][cols - 1] * 2;
            }
            else {
                arr[i][j] = arr[i][j - 1] * 2;
            }
        }
    }

    cout << "Created array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //завдання 2

    int rows, cols, startValue;

    cout << "Enter the number of strings of the array: ";
    cin >> rows;
    cout << "Enter the number of array columns:";
    cin >> cols;
    cout << "Enter the starting number: ";
    cin >> startValue;

    int arr[rows][cols];

    int currentValue = startValue;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = currentValue; 
            currentValue++;         
        }
    }

    cout << "Created array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}
