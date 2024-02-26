#include <iostream>

int addition(int firstNumber, int secondNumber){
    int sum = firstNumber + secondNumber;
    return sum;
}

int main(){
    int firstNumber = 10; // another way of assigning values to variable is: "int firstNumber {10}"
    int secondNumber = 12;

    int sum = firstNumber + secondNumber;

    std::cout << "The First Number is: " << firstNumber << std::endl;
    std::cout << "The Second Number is: " << secondNumber << std::endl;
    std::cout << "The Sum is: " << sum << std::endl;

    int fxnSum = addition(7,3);
    std::cout << "The First Number is: " << firstNumber << std::endl;
    std::cout << "The Second Number is: " << secondNumber << std::endl;
    std::cout << "The addition of values supplied in the function is: " << fxnSum << std::endl;

    std::cout << "The addition of values supplied in the function is: " << addition(13,25) << std::endl;

    return 0;
}