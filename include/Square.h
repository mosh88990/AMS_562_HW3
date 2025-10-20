/**
 * @file Square.h
 * @brief Declaration of the Square class for scientific programming.
 */

#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "Rectangle.h"

/**
 * @class Square
 * @brief Represents a square in 2D space.
 */
class Square : public Rectangle {
private:
    double l; /** Side length */

public:
    /**
     * @brief Parameterized constructor initializes the square with the top-left point and the side length.
     * @throws std::runtime_error if the side length is not positive.
     * @param p Top-left point.
     * @param l Side length.
     */
    Square(Point p, double l);

    // Accessors
    double getL() const;

    /**
     * @brief Calculates the area of the square.
     * @returns Area of the square.
     */
    double area() const override;

};

#endif // SQUARE_H
