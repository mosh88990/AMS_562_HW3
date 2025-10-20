/**
 * @file Point.h
 * @brief Declaration of the Point class for scientific programming.
 */

#ifndef POINT_H
#define POINT_H

#include <string>

/**
 * @class Point
 * @brief Represents a point in 2D space.
 */
class Point {
private:
    double x; /** X-coordinate */
    double y; /** Y-coordinate */

public:
    /**
     * @brief Default constructor intializes point at origin.
     */
    Point();

    /**
     * @brief Parameterized constructor initializes point with given coordinates.
     * @param x_val X-coordinate.
     * @param y_val Y-coordinate.
     */
    Point(double x_val, double y_val);

    // Accessors
    double getX() const;
    double getY() const;

    // Mutators
    void setX(double x_val);
    void setY(double y_val);

    /**
     * @brief Calculates the distance of a point from the origin.
     * @return Distance from the origin.
     */
    double distanceFromOrigin() const;

    /**
     * @brief Calculates the distance to another point.
     * @param other The other Point object.
     * @return Distance between this point and the other point.
     */
    double distanceTo(const Point& other) const;

    /**
     * @brief Returns a string representation of the point.
     * @return String in the format "(x, y)".
     */
    std::string toString() const;
};

#endif // POINT_H
