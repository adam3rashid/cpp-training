#include <iostream>
#include <string>

int main(){
    std::string location;
    std::cout << "Where do you live?" << std::endl;
    std::getline(std::cin, location);
    //std::cin >> location;
    std::cout << "I've heard great things about " << location << ". I'd like to go sometime.";
    return 0;
}