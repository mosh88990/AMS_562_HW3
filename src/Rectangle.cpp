/**
 * @file Rectangle.cpp
 * @brief Implementation of the Rectangle class for scientific programming.
 */

#include <string>
#include <cmath>
#include <stdexcept>
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

const double EPS = 1e-9;

/**
 * @brief Parameterized constructor initializes the rectangle with the top-left and bottom-right points.
 * @param tl Top-left point.
 * @param br Bottom-right point.
 */
Rectangle::Rectangle(Point tl, Point br) : tl(tl), bl(Point(tl.getX(), br.getY())), br(br), tr(Point(br.getX(), tl.getY())) {}

// Accessors
Point Rectangle::getTL() const {
    return tl;
}
Point Rectangle::getBL() const {
    return bl;
}
Point Rectangle::getBR() const {
    return br;
}
Point Rectangle::getTR() const {
    return tr;
}

/**
 * @brief Calculates the area of the rectangle.
 * @returns Area of the rectangle.
 */
double Rectangle::area() const {
    return (std::abs(tl.getX() - br.getX())) * (std::abs(tl.getY() - br.getY()));
}

/**
 * @brief Calculates the perimeter of the rectangle.
 * @returns Perimeter of the rectangle.
 */
double Rectangle::perimeter() const {
    std::string a = tl.toString();
    std::string b = tr.toString();
    std::string c = br.toString();
    std::string d = bl.toString();

    return 2*(std::abs(tl.getX() - tr.getX())) + 2*(std::abs(tl.getY() - bl.getY()));
}

/**
 * @brief Determines whether a given point lies inside the rectangle excluding edges.
 * @param p Point to check.
 * @returns true if the point lies inside the rectangle and false otherwise.
 */
bool Rectangle::liesInside(Point p) {
    if (p.getX() > tl.getX() && p.getX() < tr.getX() && p.getY() > bl.getY() && p.getY() < tl.getY()) {
        return true;
    }
    else {
        return false;
    }
}
