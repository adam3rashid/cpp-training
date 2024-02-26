#include <iostream>

int main(){
    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << std::endl;

    //using the ascii table for characters
    char value = 65 ;
    std::cout << "Value: " << value <<std::endl;
    std::cout << "Value(int: 0): " << static_cast<int>(value) << std::endl; //typecasting from char to int
    return 0;
}