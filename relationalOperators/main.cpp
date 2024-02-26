#include <iostream>

int main(){
    int number1 {45};
    int number2 {60};

    std::cout << "Number 1 is: " << number1 << std::endl;
    std::cout << "Number 2 is: " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing Variables" << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Number 1 < Number 2 is: " << (number1 < number2) << std::endl;
    std::cout << "Number 1 <= Number 2 is: " << (number1 <= number2) << std::endl;
    std::cout << "Number 1 > Number 2 is: " << (number1 > number2) << std::endl;
    std::cout << "Number 1 >= Number 2 is: " << (number1 >= number2) << std::endl;
    std::cout << "Number 1 == Number 2 is: " << (number1 == number2) << std::endl;
    std::cout << "Number 1 != Number 2 is: " << (number1 != number2) << std::endl;
    return 0;
}