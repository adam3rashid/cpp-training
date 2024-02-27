#include <iostream>
#include <cmath>

double hexagon_area(){
    double a {6.7};
    double hex_area = ((3*std::sqrt(3))/2)*pow(a,2);
    return hex_area;
}

int main(){
    std::cout << "The Area of the hexagon is: " << hexagon_area() << std::endl;
    return 0;
}