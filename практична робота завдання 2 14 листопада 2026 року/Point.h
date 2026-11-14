/*
#pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>
#include <string>

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0) : x(x), y(y), z(z) {}

    void inputData() {
        std::cout << "Введіть координату x: ";
        std::cin >> x;
        std::cout << "Введіть координату y: ";
        std::cin >> y;
        std::cout << "Введіть координату z: ";
        std::cin >> z;
    }

    void printData() const {
        std::cout << "Точка(" << x << ", " << y << ", " << z << ")\n";
    }

    void setX(double val) { x = val; }
    double getX() const { return x; }

    void setY(double val) { y = val; }
    double getY() const { return y; }

    void setZ(double val) { z = val; }
    double getZ() const { return z; }

    bool saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);
        if (!outFile.is_open()) {
            return false;
        }
        outFile << x << " " << y << " " << z;
        outFile.close();
        return true;
    }

    bool loadFromFile(const std::string& filename) {
        std::ifstream inFile(filename);
        if (!inFile.is_open()) {
            return false;
        }
        inFile >> x >> y >> z;
        inFile.close();
        return true;
    }
};

#endif */