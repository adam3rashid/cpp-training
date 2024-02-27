#include <iostream>
#include <cmath>

int main(){
    double weight {7.7};

    // floor: rounds down meaning output ni 7
    std::cout << "Weight rounded to floor is: " << std::floor(weight) << std::endl;

    // ceil: rounds up: meaning output ni 8
    std::cout << "Weight rounded to ceil is: " << std::ceil(weight) << std::endl;

    // abs: yapeana positive values despite having neg
    double savings {-5500};
    std::cout << "Abs of Weight is: " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is: " << std::abs(savings) << std::endl;

    // exp 
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is " << exponential << std::endl;

    // pow
    std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is: " << std::pow(9,3) << std::endl;

    // log opposite to pow
    // shows to which power should we raise e to get the value
    std::cout << "The log of 1000 is: " << std::log(1000) << std::endl;

    // shows to which power should we raise 10 to get the value
    std::cout << "The log of 1000 is: " << std::log10(1000) << std::endl;

    // round off
    std::cout << "3.654 rounded to: " << std::round(3.654) << std::endl;
    std::cout << "2.5 rounded to: " << std::round(2.5) << std::endl;
    std::cout << "2.4 rounded to: " << std::round(2.4) << std::endl;

    // square root
    std::cout << "The Square root of 100 is: " << std::sqrt(100) << std::endl;

    return 0;
}