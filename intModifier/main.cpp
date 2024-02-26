#include <iostream>

int main(){
    int value1{10};
    int value2{-300};
    std::cout << value1 << ' ' << value2 <<std::endl;
    std::cout << sizeof(value1) << ' ' << sizeof(value2) <<std::endl;

    signed int value3{5};
    signed int value4{-150};
    std::cout << value3 << ' ' << value4 <<std::endl;
    std::cout << sizeof(value3) << ' ' << sizeof(value4) <<std::endl;

    unsigned int value5{9};
    //unsigned int value6{-20}; this line throws an error when assigning a negative value, ie, for unsigned only supply positive values
    std::cout << value5 << ' ' << value6 <<std::endl;
    std::cout << sizeof(value5) << ' ' << sizeof(value6) <<std::endl;
    return 0;
}