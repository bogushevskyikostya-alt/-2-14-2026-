/*
#include <iostream>
#include "Point.h"

int main() {
    std::setlocale(LC_ALL, "Ukrainian");

    Point p1;
    std::cout << "=== Введення координат точки ===\n";
    p1.inputData();

    std::cout << "Введена ";
    p1.printData();

    std::string filename = "point_data.txt";
    if (p1.saveToFile(filename)) {
        std::cout << "Дані успішно збережено у файл '" << filename << "'.\n";
    }
    else {
        std::cout << "Помилка відкриття файлу для збереження!\n";
    }

    Point p2;
    if (p2.loadFromFile(filename)) {
        std::cout << "Дані завантажено у новий об'єкт з файлу: ";
        p2.printData();
    }
    else {
        std::cout << "Помилка відкриття файлу для читання!\n";
    }

    return 0;
}*/