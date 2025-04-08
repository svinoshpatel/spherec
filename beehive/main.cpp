#include <iostream>
#include "beehive.h"
#include "beehive.cpp"
using namespace std;

int main() {
    Beehive defaultHive;         // Вулик за замовчуванням
    Beehive myHive(5000, 10.5, 8, "Active"); // Вулик з параметрами

    defaultHive.displayStatus(); // Виводимо статус вулика за замовчуванням
    myHive.collectHoney(3.5);    // Збираємо 3.5 кг меду з myHive
    cout << "Remaining honey: " << myHive.getHoneyAmount() << " kg" << endl;

    return 0;
}
