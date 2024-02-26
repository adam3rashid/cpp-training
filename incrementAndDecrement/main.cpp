#include <iostream>

int main(){
    int value {5};

    //invcrement
    value = value + 1;
    std::cout << "Value is: " << value << std::endl;

    //decrement
    value = 5; 
    value = value + 1;
    std::cout << "Value is: " << value << std::endl;

    //using postfix increment/decrement operator
    value = 5;

    std::cout << "Value is (postfix increment): " << value++ << std::endl;
    std::cout << "Value is: " << value << std::endl;

    value = 5;

    std::cout << "Value is (postfix decrement): " << value-- << std::endl;
    std::cout << "Value is: " << value << std::endl;

    //using prefix increment/decrement operator
    value = 5;

    std::cout << "Value is (prefix increment): " << ++value << std::endl;
    std::cout << "Value is: " << value << std::endl;

    value = 5;

    std::cout << "Value is (prefix decrement): " << --value << std::endl;
    std::cout << "Value is: " << value << std::endl;

    int value{45};
    std::cout << "The value is: " << value << std::endl;
    std::cout << std::endl;
    return 0;
}