#include "beehive.h"
#include <iostream>
using namespace std;

// Конструктор за замовчуванням
Beehive::Beehive() : beeCount(1000), honeyAmount(5.0), frameCount(5), hiveStatus("Active") {
}

// Конструктор з параметрами
Beehive::Beehive(int bees, double honey, int frames, string status) {
    beeCount = (bees > 0) ? bees : 1000;
    honeyAmount = (honey >= 0) ? honey : 5.0;
    frameCount = (frames > 0) ? frames : 5;
    hiveStatus = (!status.empty()) ? status : "Active";
}

// Методи для зміни даних
void Beehive::setBeeCount(int newBees) {
    if (newBees > 0) beeCount = newBees;
}

void Beehive::setHoneyAmount(double newHoney) {
    if (newHoney >= 0) honeyAmount = newHoney;
}

void Beehive::setFrameCount(int newFrames) {
    if (newFrames > 0) frameCount = newFrames;
}

void Beehive::setStatus(string newStatus) {
    if (!newStatus.empty()) hiveStatus = newStatus;
}

void Beehive::collectHoney(double amount) {
    if (amount > 0 && amount <= honeyAmount) {
        honeyAmount -= amount;
        cout << "Collected " << amount << " kg of honey." << endl;
    } else if (amount > honeyAmount) {
        cout << "Not enough honey! Only " << honeyAmount << " kg available." << endl;
        honeyAmount = 0;
    }
}

// Методи для отримання даних
int Beehive::getBeeCount() const {
    return beeCount;
}

double Beehive::getHoneyAmount() const {
    return honeyAmount;
}

int Beehive::getFrameCount() const {
    return frameCount;
}

string Beehive::getStatus() const {
    return hiveStatus;
}

// Виведення статусу вулика
void Beehive::displayStatus() const {
    cout << "\nBeehive Status:"
         << "\nBee Count: " << getBeeCount()
         << "\nHoney Amount: " << getHoneyAmount() << " kg"
         << "\nFrame Count: " << getFrameCount()
         << "\nStatus: " << getStatus() << endl;
}
