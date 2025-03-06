#include <iostream>

enum EyeColor {Brown, Blue, Green, Gray, Other};

int main() {
    EyeColor eyeColor = Blue;

    switch(eyeColor) {
        case Brown: std::cout << "80% percent of people have Brown eyes."; break;
        case Blue: std::cout << "10% percent of people have Blue eyes."; break;
        case Green: std::cout << "2% percent of people have Green eyes."; break;
        case Gray: std::cout << "1% percent of people have Gray eyes."; break;
        case Other: std::cout << "7% percent of people have some other eye color."; break;
        // Default in event there is an unintended value.
        default: std::cout << "Not valid eye color" << std::endl; break;


    }
}