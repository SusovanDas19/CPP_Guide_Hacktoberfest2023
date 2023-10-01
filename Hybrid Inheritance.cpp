/*In short, hybrid inheritance is a type of inheritance in object-oriented programming that combines two or more forms of inheritance,
such as single, multiple, multilevel, or hierarchical inheritance, within a single program.*/

#include <iostream>
using namespace std;

// Base class for vehicles
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle ";
    }
};

// Single inheritance: Car is a type of Vehicle
class Car : public Vehicle {
public:
    Car() {
        cout << "and it is a Car ";
    }
};

// Another base class for Engine
class Engine {
public:
    Engine() {
        cout << "with an Engine ";
    }
};

// Hybrid Inheritance: SportsCar is both a Car and has an Engine
class SportsCar : public Car, public Engine {
public:
    SportsCar() {
        cout << "and it is a Sports Car!" << endl;
    }
};

int main() {
    // Create an instance of SportsCar
    SportsCar mySportsCar;
    
    return 0;
}
