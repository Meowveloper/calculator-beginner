#include <iostream>


int main () {

    char op;

    double num1;
    double num2;
    double result;

    std::cout << std::endl;
    std::cout << "********** CALCULATOR **********\n";

    std::cout << "Enter ether ( +, -, *, / ): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;


    switch (op)
    {
        case '+':
            result = num1 + num2;
            std::cout << "Result is => " << result << '\n';
            break;
        
        case '-': 
            result = num1 - num2;
            std::cout << "Result is => " << result << '\n';
            break;
        
        case '*': 
            result = num1 * num2;
            std::cout << "Result is => " << result << '\n';
            break;

        case '/':
            result = num1 / num2;
            std::cout << "Result is => " << result << '\n';
            break;

        default:
            std::cout << "Invalid values" << '\n';
            break;
    }

    std::cout << "********************************\n";

    std::cout << '\n';
    return 0;
}