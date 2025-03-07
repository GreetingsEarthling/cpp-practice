#include <iostream>

void celebrateBirthday(int* age);

int main() {
    int myAge = 25;
    std::cout << "Before function " << myAge << std::endl;
    celebrateBirthday(&myAge);
    std::cout << "After function, age: " << myAge << std::endl;


    int luckyNumbers[5] = {1, 3, 5, 7, 9};
    std::cout << luckyNumbers << std::endl;
    std::cout << &luckyNumbers << std::endl;
    // & throws a address in memory
    std::cout << luckyNumbers[0] << std::endl;

    int* luckyPointer = luckyNumbers;
    std::cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << std::endl;
    luckyPointer++;
    std::cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << std::endl;

}

void celebrateBirthday(int* age) {
    (*age)++;
    std::cout << "Yayyy, celebrated " << *age << " birthday" << std::endl;
}

