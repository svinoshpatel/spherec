#include <iostream>
#include "sphere.h"
#include "sphere.cpp"
using namespace std;

int main() {
    Sphere unitSphere;      // radius is 1.0 by default
    Sphere mySphere(5.1);   // radius is 5.1
    
    unitSphere.displayStatistics();
    mySphere.setRadius(4.2); // resets radius to 4.2
    cout << "d=" << mySphere.getDiameter() << endl;
   
    return 0;
}
