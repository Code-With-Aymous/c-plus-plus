#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    double result;
    cout << "| ============ | Calculator | ============ |\n";
    cout << ">> Enter Operator (+, -, *, /): ";
    cin >> op;
    cout << ">> Enter First Number: ";
    cin >> num1;
    cout << ">> Enter Second Number: ";
    cin >> num2;
    switch(op){
        case '+':
        result = num1 + num2;
        cout << ">> Result: " << result << "\n";
        break;
        case '-':
        result = num1 - num2;
        cout << ">> Result: "<<result << "\n";
        break;
        case '*':
        result = num1 * num2;
        cout << ">> Result: "<<result << "\n";
        break;
        case '/':
        result = num1 / num2;
        cout << ">> Result: "<<result << "\n";
        break;
    }
    cout << "| ======================================== |\n";
    return 0;
}