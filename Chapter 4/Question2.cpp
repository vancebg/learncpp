#include <iostream>

double enterDouble()
{
    std::cout << "Enter a double value: ";
    double value;
    std::cin >> value;
    return value;
}

char enterSymbol()
{
    std::cout << "+, - *, or /: ";
    char symbol;
    std::cin >> symbol;
    return symbol;
}

int main()
{
    double a = { enterDouble() };
	double b = { enterDouble() };
	char symbol = { enterSymbol() };
    float result{};

    if (symbol == '+')
        result = a + b;
    else if (symbol == '-')
        result = a - b;
    else if (symbol == '*')
        result = a * b;
    else
        result = a / b;
        
	std::cout << a << " " << symbol << " " << b << " is " << result << '\n';
    return 0;
}