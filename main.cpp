#include <iostream>

using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero is not allowed.";
    }
    return a / b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        int result = divide(num1, num2);
        cout << "Result of division: " << result << endl;
    } catch (const char* errorMessage) {
        cout << "Exception occurred: " << errorMessage << endl;
    }

    return 0;
}

