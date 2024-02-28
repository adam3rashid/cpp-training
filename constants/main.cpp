#include <iostream>

int main(){
    const int age {25};
    const float height {5.6f};
    int years {3 * age};
    
    //You cannot declare const without initialization, it will throw an error
    //const int age; this line throws an error

    // age = 29; the variable age cannot be changed due to its datatypes, it cannot b be modified
    // height = 9.2; throws an error even before compiling same as variable age; it can't be modified
    std::cout << "Age is: " <<  age << std::endl;
    std::cout << "Height is: " << height << std::endl;
    std::cout << "Years is: " << years << std::endl;
    
    return 0;
}