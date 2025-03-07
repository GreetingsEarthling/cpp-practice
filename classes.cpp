#include <iostream>
// Classes ending brace contains a semi-colon
// By default properties are private
class Car {
public:
    std::string Name;
    std::string Color;
    double Price;

    Car(std::string name, std::string color, double price) {
        Name = name;
        Color = color;
        Price = price;
    }

    void getInfo() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Color: " << Color << std::endl;
        std::cout << "Price: " << Price << "$" << std::endl;
    }

};

int main() {

    Car myCar("Ford", "Red", 50000);
    Car myCar2("Volvo", "Black", 70000);

    myCar.getInfo();
    myCar2.getInfo();




    // again, gonna comment out these print statements below, as we are promoting code reusability.
    // we can create a function that fulfills the purpose of the print statements (within the class)

    /*
    std::cout << "Name: " << myCar.Name << std::endl;
    std::cout << "Color: " << myCar.Color << std::endl;
    std::cout << "Price: " << myCar.Price << "$" << std::endl;


    std::cout << "Name: " << myCar2.Name << std::endl;
    std::cout << "Color: " << myCar2.Color << std::endl;
    std::cout << "Price: " << myCar2.Price << "$" << std::endl;

    */

    /*
    Creating a Car class without a constructor. Too much lines of code. Above shows that we can do the same, with one single
    line of code through the use of a constructor.

    Also it's important to take note of the use of the 'public: ' keyword in the car class. Essentially we made the private variables within
    the car class publicly accessible which allowed me to modify them. 

    Car myCar;

    myCar.Name = "Ford";
    myCar.Color = "red";
    myCar.Price = 1000.53;

    Car myCar2;
    myCar2.Name = "Volvo";
    myCar2.Color = "Black";
    myCar2.Price = 80000.00;



    std::cout << "Name: " << myCar.Name << std::endl;
    std::cout << "Color: " << myCar.Color << std::endl;
    std::cout << "Price: " << myCar.Price << "$" << std::endl;

    std::cout << "Name: " << myCar2.Name << std::endl;
    std::cout << "Color: " << myCar2.Color << std::endl;
    std::cout << "Price: " << myCar2.Price << "$" << std::endl;

    
    */
    



}