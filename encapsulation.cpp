#include <iostream>

class Car {
private:
    std::string Name;
    std::string Color;
    double Price;
    bool IsBroken;

public:
    Car(std::string name, std::string color, double price) {
        Name = name;
        Color = color;
        Price = price;
        IsBroken = false;
    }


    void getInfo() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Color: " << Color << std::endl;
        std::cout << "Price: " << Price << "$" << std::endl;
    }

    void crashCar() {
        std::cout << Name << " crashed" << std::endl;
        IsBroken = true;
    }

    void repairCar() {
        std::cout << Name << " repaired" << std::endl;
        IsBroken = false;
    }

    void move() {
        if(IsBroken) {
            std::cout << Name << " is broken" << std::endl;
        }
        else {
            std::cout << Name << " is driving" << std::endl;
        }
    }
};

int main() {

    Car ford("Ford", "Red", 50000);
    Car volvo("Volvo", "Black", 70000);

    ford.move();
    ford.crashCar();
    ford.move();
    ford.repairCar();
    ford.move();
    
    


}