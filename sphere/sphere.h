#pragma once
const double PI = 3.14159; // глобальна константа PI

class Sphere {
public:
    // Загальнодоступний розділ класу
    Sphere();                      // Конструктор за замовчуванням
    Sphere(double initialRadius);  // Конструктор з параметром
    
    void setRadius(double newRadius);    // Метод для зміни радіуса
    double getRadius() const;           // Отримати радіус
    double getDiameter() const;         // Отримати діаметр
    double getCircumference() const;    // Отримати довжину кола
    double getArea() const;            // Отримати площу поверхні
    double getVolume() const;          // Отримати об'єм
    void displayStatistics() const;    // Показати статистику
    
private:
    double theRadius; // Закрите поле для зберігання радіуса
};
