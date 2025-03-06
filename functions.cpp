#include <iostream>

//Function declaration, missing definition
float sum(float a, float b);
void introduceMe(std::string name, int age = 0);

int main() {

    std::cout << sum(3.2, 5.34) << std::endl;
    std::cout << sum(4, 1.4) << std::endl;
    std::cout << sum(102.234, 89.12) << std::endl;
    introduceMe("Jason", 19);

}

float sum(float a, float b) {
    return a + b;
}

void introduceMe(std::string name, int age) {
    std::cout << "My name is " << name << std::endl;
    std::cout << "I am " << age << " years old" << std::endl;
}

