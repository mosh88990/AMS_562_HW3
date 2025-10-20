/**
 * @file Line.cpp
 * @brief Implementation of the Line class for scientific programming.
 */

#include <string>
#include <cmath>
#include <stdexcept>
#include "Line.h"

const double EPS = 1e-9;

/**
 * @brief Parameterized constructor initializes line with given points.
 * @throws std::runtime_error if the two input points are the same.
 * @param p1 First point.
 * @param p2 Second point.
 */
Line::Line(Point p1, Point p2) : p1(p1), p2(p2) {
    if (std::abs(p1.getX() - p2.getX()) < EPS && std::abs(p1.getY() - p2.getY()) < EPS) {
        throw std::runtime_error("Invalid line: endpoints are the same");
    }
}

// Accessors
Point Line::getP1() const {
    return p1;
}
Point Line::getP2() const {
    return p2;
}

// Mutators
void Line::setP1(Point newP1) {
    if (std::abs(newP1.getX() - p2.getX()) < EPS && std::abs(newP1.getY() - p2.getY()) < EPS) {
        throw std::runtime_error("Invalid line: endpoints are the same");
    }
    p1 = newP1;
}
void Line::setP2(Point newP2) {
    if (std::abs(p1.getX() - newP2.getX()) < EPS && std::abs(p1.getY() - newP2.getY()) < EPS) {
        throw std::runtime_error("Invalid line: endpoints are the same");
    }
    p2 = newP2;
}

/**
 * @brief Calculates the length of the line.
 * @return Length of the line.
 */
double Line::length() const {
    return p1.distanceTo(p2);
}

/**
 * @brief Calculates the slope of the line.
 * @return Slope of the line.
 */
double Line::slope() const {
    if (std::abs(p1.getX() - p2.getX()) < EPS) {
        throw std::runtime_error("Slope undefined");
    }
    return (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
}

/**
 * @brief Calculates the y-coordinate of the y-intercept of the line.
 * @return Y-coordinate of the y-intercept of the line.
 */
double Line::yInt() const {
    return p1.getY() - slope() * p1.getX();
}
