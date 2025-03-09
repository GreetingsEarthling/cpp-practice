#include <iostream>

class Car {
private:
    std::string Color;
    double Price;

protected:
    std::string Name;
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

// Inheritance 

class FlyingCar :public Car {
public:
    FlyingCar(std::string name, std::string color, double price):Car(name, color, price) {

        
    }

    void move() {
        if(IsBroken) {
            std::cout << Name << " is broken" << std::endl;
        }
        else {
            std::cout << Name << " is flying" << std::endl;
        }
    }
};

class UnderwaterCar :public Car {
public:
    UnderwaterCar(std::string name, std::string color, double price):Car(name, color, price) {
    }
    void move() {
        if(IsBroken) {
            std::cout << Name << " is broken" << std::endl;
        }
        else {
            std::cout << Name << " is diving" << std::endl;
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
    
    FlyingCar flyingCar("Sky Fury", "Black", 500000);
    flyingCar.getInfo();
    flyingCar.move();

    // Polymorphism

    UnderwaterCar underwaterCar("Sea Storm", "Blue", 600000);
    underwaterCar.getInfo();
    underwaterCar.move();

    // Pointers with classes

    Car* car1 = &flyingCar;
    Car* car2 = &underwaterCar;

    car1->crashCar();
    car2->crashCar();

    ford.move();
    flyingCar.move();
    underwaterCar.move();

    car1->repairCar();
    car2->repairCar();

    ford.move();
    flyingCar.move();
    underwaterCar.move();

    
}