#include <iostream>

int main(){
    int value {45};
    value += 5;
    std::cout << "Result (Compound Addition) is: " << value << std::endl;
    std::cout << std::endl;

    value -= 5;
    std::cout << "Result (Compound Subtraction) is: " << value << std::endl;
    std::cout << std::endl;

    value *= 2;
    std::cout << "Result (Compound Multiplication) is: " << value << std::endl;
    std::cout << std::endl;

    value /= 3;
    std::cout << "Result (Compound Division) is: " << value << std::endl;
    std::cout << std::endl;

    value %= 11;
    std::cout << "Result (Compound Modulus) is: " << value << std::endl;
    std::cout << std::endl;
    return 0;
}