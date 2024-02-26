#include <iostream>
#include <string>
#include <limits>

int main(){
    std::string name;
    std::string full_name;
    int age;

    std::cout << "Please Enter your First Name: " << std::endl;
    std::cin >> name;
    
    std::cout << "Hello, " << name << std::endl;

    std::cout << "Please Enter your Age: " << std::endl;
    std::cin >> age;

    std::cerr << "Error Message: Something is Wrong! " << std::endl;
    std::clog << "Log Message: Something Happened! " << std::endl; 

    std::cout << "Hello " << name << ", you are " << age << " years old" << std::endl;

    std::cout << "Please type your Name and Age: " << std::endl;
    std::cin >> name >> age ;

    std::cout << "Hello " << name << ", you are " << age << " years old" << std::endl;

    std::cout << "Please Enter your Full Name and Age: " << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //realised that I need to add this line ikubali space in between
    std::getline(std::cin, full_name);
    std::cin >> age;
    std::cout << "Hello " << full_name << ", you are " << age << " years old" << std::endl;


    return 0;
}