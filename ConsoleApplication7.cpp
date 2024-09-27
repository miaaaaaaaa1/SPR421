#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;

int main() {
//завдання 1
    srand(static_cast<unsigned int>(time(0))); 

    const int SIZE = 10; 
    int arr[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "Array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    //завдання 2

    const int MONTHS = 12;
    double profit[MONTHS];
    int startMonth, endMonth;

    cout << "Enter the profit of the company for each month (12 months):" << endl;
    for (int i = 0; i < MONTHS; ++i) {
        cout << "Month" << i + 1 << ": ";
        cin >> profit[i];
    }

    cout << "Enter a range of months: " << endl;
    cin >> startMonth >> endMonth;

    if (startMonth < 1 || endMonth > 12 || startMonth > endMonth) {
        cout << "Incorrect range!" << endl;
        return 1;
    }

    double minProfit = profit[startMonth - 1];
    double maxProfit = profit[startMonth - 1];
    int minMonth = startMonth;
    int maxMonth = startMonth;

    for (int i = startMonth - 1; i < endMonth; ++i) {
        if (profit[i] < minProfit) {
            minProfit = profit[i];
            minMonth = i + 1;
        }
        if (profit[i] > maxProfit) {
            maxProfit = profit[i];
            maxMonth = i + 1;
        }
    }

    cout << "Maximum profit per month " << maxMonth << ": " << maxProfit << endl;
    cout << "Minimum profit per month " << minMonth << ": " << minProfit << endl;
}
