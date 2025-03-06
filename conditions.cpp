#include <iostream>

int main() {

    bool isTodaySunny = false;
    bool isTodayWeekend = false;


    // Standard if else statement
    if (isTodaySunny && isTodaySunny) {
        std::cout << "Go to the park" << std::endl;
    }
    else if (isTodayWeekend && isTodaySunny){
        std::cout << "Go to the park, but take an umbrella" << std::endl;
    }
    else {
        std::cout << "Go to work!" << std::endl;
    }
    isTodaySunny = true;
    
    // Ternary condition: condition? true response : false response
    isTodaySunny? std::cout << "Go to the park" : std::cout << "Take an umbrella";




}