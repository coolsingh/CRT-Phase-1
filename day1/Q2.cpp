#include <iostream>
using namespace std;

int globalVar = 100;

int main() {
    int userInput;
    double result;

    cout << "Enter an integer: ";
    cin >> userInput;

    if (userInput == 0) {
        cout << "Division by zero is not allowed." << endl;
    } else {
        result = (double)globalVar / userInput;
        cout << "Result of division: " << result << endl;
    }

    return 0;
} 