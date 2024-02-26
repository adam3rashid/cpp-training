#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go Through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is not green!" << std::endl;
    }

    std::cout << "Red Light: " << red_light << std::endl;
    std::cout << "Green Light: " << green_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Red Light: " << red_light << std::endl;
    std::cout << "Green Light: " << green_light << std::endl;

    return 0;
}