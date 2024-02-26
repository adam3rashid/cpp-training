#include <iostream>

int main(){
    /*
        There are 3 ways of assigning values to variables:
        1. Functional initialization ()
        2. Braces Initialization   {}
        3. Assignment operator Initialization =
    */

    //Braced initializers
    //Variable may contain random garbage value. Warning
    int elephant_count;
    std::cout << "Elephant Count is: " << elephant_count << std::endl;

    int lion_count{}; //initializes zero
    std::cout << "Lion Count is: " << lion_count << std::endl;

    int dog_count{10}; //initializes to 10
    std::cout << "Dog Count is: " << dog_count << std::endl;

    int cat_count{15}; //initializes to 15  
    std::cout << "Cat Count is: " << cat_count << std::endl;

    //can use expression as an initializer
    int domesticated_cat{dog_count + cat_count};
    std::cout << "Domesticated Cat: " << domesticated_cat << std::endl;

    //functional initialization
    std::cout << "Functional Initialization" << std::endl;
    int apple_count(5);
    std::cout << "Apple Count: " << apple_count << std::endl;

    int orange_count(10);
    std::cout << "Orange Count: " << orange_count << std::endl;

    int fruit_count(apple_count + orange_count);
    std::cout << "Fruit Count: " << fruit_count << std::endl;

    //Check the size using sizeof property
    //you can supply datatype directly in the curly braces, or even supply the variable name to get the size
    std::cout << "The Size of Int: " << sizeof(int) << std::endl;
    std::cout << "The size of Fruit Count is: " << sizeof(fruit_count) << std::endl;
    return 0;
}