#pragma once
#include <string>

class Beehive {
public:
    // Конструктори
    Beehive();                                    // Конструктор за замовчуванням
    Beehive(int bees, double honey, int frames, std::string status); // Конструктор з параметрами

    // Методи для зміни даних
    void setBeeCount(int newBees);
    void setHoneyAmount(double newHoney);
    void setFrameCount(int newFrames);
    void setStatus(std::string newStatus);
    void collectHoney(double amount); // Метод для збору меду

    // Методи для отримання даних (константні)
    int getBeeCount() const;
    double getHoneyAmount() const;
    int getFrameCount() const;
    std::string getStatus() const;

    // Метод для виведення статусу вулика
    void displayStatus() const;

private:
    int beeCount;          // Кількість бджіл
    double honeyAmount;    // Обсяг меду (у кг)
    int frameCount;       // Кількість рамок
    std::string hiveStatus; // Стан вулика (наприклад, "Active", "Inactive")
};
