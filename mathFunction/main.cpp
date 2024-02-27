#include <iostream>
#include <cmath>

int main(){
    double weight {7.7};

    //floor: rounds down meaning output ni 7
    std::cout << "Weight rounded to floor is: " << std::floor(weight) << std::endl;

    //ceil: rounds up: meaning output ni 8
    std::cout << "Weight rounded to ceil is: " << std::ceil(weight) << std::endl;

    //abs: yapeana positive values despite having neg
    double savings {-5500};
    std::cout << "Abs of Weight is: " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is: " << std::abs(savings) << std::endl;

    //exp 
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is " << exponential << std::endl;

    //pow
    std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is: " << std::pow(9,3) << std::endl;

    return 0;
}