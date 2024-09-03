#include <iostream>
using namespace std;

// Function to print divisors in decreasing order
void printDivisors(int num) {
    for (int i = num; i >= 1; i--) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int num;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;

    do {
        cout << "Please enter a positive integer: ";
        cin >> num;

        while (num <= 0) {
            cout << num << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> num;
        }

        printDivisors(num);

        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

    } while (choice == 'Y' || choice == 'y');

    return 0;
}

