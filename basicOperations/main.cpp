#include <iostream>

int main(){
    //addition
    int number1 {2};
    int number2 {7};
    int result = number1 + number2;
    std::cout <<"Addition result is: " << result <<std::endl;

    //subtraction
    result = number2 - number1; 
    std::cout << "Subtraction result is: " << result << std::endl;
    result = number1 - number2; 
    std::cout << "Subtraction Neg result is: " << result << std::endl;

    //multiplication
    result = number1 * number2;
    std::cout << "Multiplication result is: " << result << std::endl;

    //Division
    result = number1/number2;
    std::cout << "Division result is: " << result << std::endl;
    result = number2/number1;
    std::cout << "Division result is: " << result << std::endl;

    //Modulus
    result = number2 % number1;
    std::cout << "Modulus result is: " << result << std::endl;
    return 0;
}