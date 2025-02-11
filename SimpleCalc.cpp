#include <iostream>
#include <cmath> // For power function

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

    // Function to calculate power (a^b)
    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Function to calculate modulus (a % b)
    int modulus(int a, int b) {
        return (b != 0) ? (a % b) : 0; // Avoid division by zero
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operation;
    
    std::cout << "Simple Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /, ^, %): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result;
    if (operation == '^') {
        result = calc.power(num1, num2);
    } else if (operation == '%') {
        result = calc.modulus(static_cast<int>(num1), static_cast<int>(num2));
    } else {
        result = calc.operate(num1, num2, operation);
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
