/**
 * @file Point.cpp
 * @brief Implementation of the Point class for scientific programming.
 */

#include <string>
#include <cmath>
#include <sstream>
#include "Point.h"

/**
 * @brief Default constructor intializes point at origin.
 */
Point::Point() : x(0.0), y(0.0) {}

/**
 * @brief Parameterized constructor initializes point with given coordinates.
 * @param x_val X-coordinate.
 * @param y_val Y-coordinate.
 */
Point::Point(double x_val, double y_val) : x(x_val), y(y_val) {}

// Accessors
double Point::getX() const {
    return x;
}
double Point::getY() const {
    return y;
}

// Mutators
void Point::setX(double x_val) {
    x = x_val;
}
void Point::setY(double y_val) {
    y = y_val;
}

/**
 * @brief Calculates the distance of a point from the origin.
 * @return Distance from the origin.
 */
double Point::distanceFromOrigin() const {
    return std::sqrt(x*x + y*y);
}

/**
 * @brief Calculates the distance to another point.
 * @param other The other Point object.
 * @return Distance between this point and the other point.
 */
double Point::distanceTo(const Point& other) const {
    return std::sqrt((other.x - x)*(other.x - x) + (other.y - y)*(other.y - y));
}

/**
 * @brief Returns a string representation of the point.
 * @return String in the format "(x, y)".
 */
std::string Point::toString() const {
    std::ostringstream oss;
    oss << "(" << x << ", " << y << ")";
    return oss.str();
}
