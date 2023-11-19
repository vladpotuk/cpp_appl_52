#include "box.h"

void setCarValues(Car& car, double length, double groundClearance, double engineVolume,
    double enginePower, double wheelDiameter, const string& color,
    const string& transmissionType) {
    car.length = length;
    car.groundClearance = groundClearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

void displayCarValues(const Car& car) {
    cout << "Car Details:" << endl;
    cout << "Length: " << car.length << " meters" << endl;
    cout << "Ground Clearance: " << car.groundClearance << " meters" << endl;
    cout << "Engine Volume: " << car.engineVolume << " liters" << endl;
    cout << "Engine Power: " << car.enginePower << " horsepower" << endl;
    cout << "Wheel Diameter: " << car.wheelDiameter << " inches" << endl;
    cout << "Color: " << car.color << endl;
    cout << "Transmission Type: " << car.transmissionType << endl;
    cout << endl;
}

void searchCarsByColor(const Car cars[], int size, const string& targetColor) {
    cout << "Cars with color " << targetColor << ":" << endl;
    for (int i = 0; i < size; ++i) {
        if (cars[i].color == targetColor) {
            displayCarValues(cars[i]);
        }
    }
}
