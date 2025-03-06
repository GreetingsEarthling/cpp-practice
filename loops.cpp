#include <iostream>

int main() {

    std::cout << "WHILE:\n";
    int counter = 1;

    while (counter <= 10) {
        std::cout << counter << std::endl;
        counter++;
    }

    std::cout << "DO-WHILE:\n";
    int doWhileCounter = 1;
    do {
        std::cout << doWhileCounter << std::endl;
        doWhileCounter++;
    } while (doWhileCounter <= 10);

    std::string animals[5] = {"cat", "dog", "cow", "goat", "bee"};

    // For loop
    std::cout << "FOR LOOP:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << animals[i] << std::endl;
    }

}