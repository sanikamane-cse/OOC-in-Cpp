//PROGRAM//

#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle\n";
    }
};

class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This vehicle is a car\n";
    }
};

class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "This vehicle is a Bus with fare\n";
    }
};

int main() {
    // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout<<"Class: SY-CSE\n";
    cout << "---------------------------------\n";

    // Creating object of subclass will invoke base class constructors
    Bus obj2;

    return 0;
}


//OUTPUT//

/*
Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY-CSE
---------------------------------
This is a vehicle
Fare of Vehicle
This vehicle is a Bus with fare
*/
