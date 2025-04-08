#include "sphere.h"
#include <iostream>
using namespace std;

Sphere::Sphere() : theRadius(1.0) {
    // Конструктор за замовчуванням ініціалізує радіус значенням 1.0
}

Sphere::Sphere(double initialRadius) {
    if (initialRadius > 0)
        theRadius = initialRadius;
    else
        theRadius = 1.0;
}

void Sphere::setRadius(double newRadius) {
    if (newRadius > 0)
        theRadius = newRadius;
    else
        theRadius = 1.0;
}

double Sphere::getRadius() const {
    return theRadius;
}

double Sphere::getDiameter() const {
    return 2.0 * theRadius;
}

double Sphere::getCircumference() const {
    return PI * getDiameter();
}

double Sphere::getArea() const {
    return 4.0 * PI * theRadius * theRadius;
}

double Sphere::getVolume() const {
    double radiusCubed = theRadius * theRadius * theRadius;
    return (4.0 * PI * radiusCubed) / 3.0;
}

void Sphere::displayStatistics() const {
    cout << "\nRadius = " << getRadius()
         << "\nDiameter = " << getDiameter()
         << "\nCircumference = " << getCircumference()
         << "\nArea = " << getArea()
         << "\nVolume = " << getVolume() << endl;
}
