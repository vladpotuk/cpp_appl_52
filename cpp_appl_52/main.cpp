#include "box.h"

int main() {
    const int numCars = 3;
    Car cars[numCars];

    setCarValues(cars[0], 4.5, 0.15, 2.0, 200, 18, "Blue", "Automatic");
    setCarValues(cars[1], 4.2, 0.2, 2.5, 250, 20, "Red", "Manual");
    setCarValues(cars[2], 5.0, 0.18, 3.0, 300, 22, "Black", "Automatic");

    for (int i = 0; i < numCars; ++i) {
        displayCarValues(cars[i]);
    }

    searchCarsByColor(cars, numCars, "Blue");

    return 0;
}
