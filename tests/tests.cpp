/**
 * @file tests.cpp
 * @brief Unit tests for the scientific programming project.
 */

#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
#include <cassert>

/*
 * @brief Tests the distanceFromOrigin method of the Point class.
 */
void test_distance_from_origin() {
    Point p1(3, 4);
    Point p2(0, 0);
    assert(p1.distanceFromOrigin() == 5.0);
    assert(p2.distanceFromOrigin() == 0.0);
    std::cout << "test_distance_from_origin PASSED" << std::endl;
}

/*
 * @brief Tests the distanceTo method of the Point class.
 */
void test_distance_to() {
    Point p1(0, 0);
    Point p2(3, 4);
    assert(p1.distanceTo(p2) == 5.0);
    assert(p1.distanceTo(p1) == 0.0);
    std::cout << "test_distance_to PASSED" << std::endl;
}

/*
 * @brief Tests the toString method of the Point class.
 */
void test_to_string() {
    Point p(0, 0);
    assert(p.toString() == "(0, 0)");
    std::cout << "test_to_string PASSED" << std::endl;
}

/*
 * @brief Tests the length method of the Line class.
 */
void test_length() {
    Point p1(0, 0);
    Point p2(3, 4);
    Line l(p1, p2);
    assert(l.length() == 5.0);
    std::cout << "test_length PASSED" << std::endl;
}

/*
 * @brief Tests the slope method of the Line class.
 */
void test_slope() {
    Point p1(0, 0);
    Point p2(3, 3);
    Point p3(1, 0);
    Line l1(p1, p2);
    Line l2(p1, p3);
    assert(l1.slope() == 1.0);
    assert(l2.slope() == 0.0);
    std::cout << "test_slope PASSED" << std::endl;
}

/*
 * @brief Tests the yInt method of the Line class.
 */
void test_y_int() {
    Point p1(0, 0);
    Point p2(3, 4);
    Point p3(4, 5);
    Line l1(p1, p2);
    Line l2(p2, p3);
    assert(l1.yInt() == 0.0);
    assert(l2.yInt() == 1.0);
    std::cout << "test_y_int PASSED" << std::endl;
}

/*
 * @brief Tests the area method of the Rectangle class.
 */
void test_rectangle_area() {
    Point p1(3, 0);
    Point p2(0, 4);
    Rectangle r(p2, p1);
    assert(r.area() == 12.0);
    std::cout << "test_rectangle_area PASSED" << std::endl;
}

/*
 * @brief Tests the perimeter method of the Rectangle class.
 */
void test_perimeter() {
    Point p1(3, 0);
    Point p2(0, 4);
    Rectangle r(p2, p1);
    Square s(p1, 3);
    assert(r.perimeter() == 14.0);
    assert(s.perimeter() == 12.0);
    std::cout << "test_perimeter PASSED" << std::endl;
}

/*
 * @brief Tests the liesInside method of the Rectangle class.
 */
void test_lies_inside() {
    Point p1(3, 0);
    Point p2(0, 4);
    Rectangle r(p2, p1);
    Point p3(1, 1);
    assert(r.liesInside(p3) == true);
    assert(r.liesInside(p1) == false);
    std::cout << "test_lies_inside PASSED" << std::endl;
}

/*
 * @brief Tests the area method of the Square class.
 */
void test_square_area() {
    Point p1(0, 0);
    Square s(p1, 3);
    assert(s.area() == 9.0);
    std::cout << "test_square_area PASSED" << std::endl;
}

int main() {
    test_distance_from_origin();
    test_distance_to();
    test_to_string();
    test_length();
    test_slope();
    test_y_int();
    test_rectangle_area();
    test_perimeter();
    test_lies_inside();
    test_square_area();
}
