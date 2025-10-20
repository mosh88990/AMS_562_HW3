/**
 * @file Rectangle.h
 * @brief Declaration of the Rectangle class for scientific programming.
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Point.h"

/**
 * @class Rectangle
 * @brief Represents a rectangle in 2D space.
 */
class Rectangle {
private:
    Point tl; /** Top-left point */
    Point bl; /** Bottom-left point */
    Point br; /** Bottom-right point */
    Point tr; /** Top-right point */

public:
    /**
     * @brief Parameterized constructor initializes the rectangle with the top-left and bottom-right points.
     * @param tl Top-left point.
     * @param br Bottom-right point.
     */
     Rectangle(Point tl, Point br);

    // Accessors 
    Point getTL() const;
    Point getBL() const;
    Point getBR() const;
    Point getTR() const;

    /**
     * @brief Calculates the area of the rectangle.
     * @returns Area of the rectangle.
     */
    virtual double area() const;

    /**
     * @brief Calculates the perimeter of the rectangle.
     * @returns Perimeter of the rectangle.
     */
    double perimeter() const;

    /**
     * @brief Determines whether a given point lies inside the rectangle excluding edges.
     * @param p Point to check.
     * @returns true if the point lies inside the rectangle and false otherwise.
     */
    bool liesInside(Point p);
};

#endif // RECTANGLE_H
