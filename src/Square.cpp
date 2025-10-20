/**
 * @file Square.cpp
 * @brief Implementation of the Square class for scientific programming.
 */

#include <string>
#include <cmath>
#include <stdexcept>
#include "Rectangle.h"
#include "Point.h"
#include "Square.h"

/**
 * @brief Parameterized constructor initializes the square with the top-left point and the side length.
 * @throws std::runtime_error if the side length is not positive.
 * @param p Top-left point.
 * @param l Side length.
 */
Square::Square(Point p, double l) : Rectangle(p, Point(p.getX() + l, p.getY() - l)), l(l) {
    if (l <= 0) {
        throw std::runtime_error("Invalid side length");
    }
}

// Accessors
double Square::getL() const {
    return l;
}

/**
 * @brief Calculates the area of the square.
 * @returns Area of the square.
 */
double Square::area() const {
    return l*l;
}
