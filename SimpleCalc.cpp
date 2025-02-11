#include <iostream>

// Class definition for Calculator
class Calculator {
public:
    // Function to perform arithmetic operations
    double operate(double a, double b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return (b != 0) ? (a / b) : 0; // Avoid division by zero
            default: std::cout << "Invalid operator!" << std::endl; return 0;
        }
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operation;
    
    std::cout << "Simple Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result = calc.operate(num1, num2, operation);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
