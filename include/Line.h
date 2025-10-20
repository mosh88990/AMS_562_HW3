/**
 * @file Line.h
 * @brief Declaration of the Line class for scientific programming.
 */

#ifndef LINE_H
#define LINE_H

#include <string>
#include "Point.h"

/**
 * @class Line
 * @brief Represents a line in 2D space.
 */
class Line {
private:
    Point p1; /** First point */
    Point p2; /** Second point */

public:
    /**
     * @brief Parameterized constructor initializes line with given points.
     * @throws std::runtime_error if the two input points are the same.
     * @param p1 First point.
     * @param p2 Second point.
     */
    Line(Point p1, Point p2);

    // Accessors
    Point getP1() const;
    Point getP2() const;

    // Mutators
    void setP1(Point newP1);
    void setP2(Point newP2);

    /**
     * @brief Calculates the length of the line.
     * @return Length of the line.
     */
    double length() const;

    /**
     * @brief Calculates the slope of the line.
     * @return Slope of the line.
     */
    double slope() const;

    /**
     * @brief Calculates the y-coordinate of the y-intercept of the line.
     * @return Y-coordinate of the y-intercept of the line.
     */
    double yInt() const;
};

#endif // LINE_H
