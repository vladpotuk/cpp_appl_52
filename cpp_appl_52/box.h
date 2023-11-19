#ifndef BOX_H
#define BOX_H

#include <iostream>
#include <string>

using namespace std;

struct Car {
    double length;
    double groundClearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};

void setCarValues(Car& car, double length, double groundClearance, double engineVolume,
    double enginePower, double wheelDiameter, const string& color,
    const string& transmissionType);

void displayCarValues(const Car& car);

void searchCarsByColor(const Car cars[], int size, const string& targetColor);

#endif 
