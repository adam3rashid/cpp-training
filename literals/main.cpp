#include <iostream>

int main(){
    //literals do not occupy space in memmory, they r rep in either prefix or suffix
    //this is narrowing error we have to be careful kwa ajili ya stuff to do with size of different data types
    unsigned char unsigned_char {53u}; // suffix u is a literal rep unsigned
    
    // no literal to represent short
    short short_var {-327}; 
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};

    std::cout << "Short Var is: " << short_var << std::endl;
    std::cout << "Short Int is: " << short_int << std::endl;
    std::cout << "Signed short is: " << signed_short << std::endl;

    unsigned short int unsigned_short_int {3245U}; 
    std::cout << "Unsigned short Int is: " << unsigned_short_int << std::endl;

    long long_var {88L};
    unsigned long int unsigned_long_int {888ul};
    long long long_long {999ll};
    long long int long_long_int {908ll};
    signed long long signed_long_long {343ll};

    std::cout << "Long Var is: " << long_var << std::endl;
    std::cout << "Unsigned Long int is: " << unsigned_long_int << std::endl;
    std::cout << "Long long is: " << long_long << std::endl;
    std::cout << "Long long int is: " << long_long_int << std::endl;
    std::cout << "Signed long long is: " << signed_long_long << std::endl;

    // grouping numbers
    unsigned int prize {1'500'00'0u};
    std::cout << "The prize is: " << prize << std::endl;

    //octal is prefixed with 0, be careful with that
    int error_octal {055};
    std::cout << "Error Octal is: " << error_octal << std::endl;

    // rep colors with hex 
    int black_color {0xffffff};
    std::cout << "Black color is: " << black_color << std::endl;

    // string literal
    std::string string_Literal {"Hit the road"};
    std::cout << "The string literal is: " << string_Literal << std::endl;


    return 0;
}