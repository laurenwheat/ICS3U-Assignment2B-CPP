// Created by: Lauren
// Created on: April 2021
// This program calculates the area of a triangle
// where the user gets to enter the height and base in mm

#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    int height;
    int base;
    int area;
    // input
    std::cout << "We will calculate the area of a triangle. " << std::endl;
    std::cout << "Enter the height (mm): ";
    std::cin >> height;
    std::cout << "Enter the base (mm): ";
    std::cin >> base;
    // process
    area = (height*base)/2;
    // output
    std::cout << "Area is " << (area) << "mm2" << std::endl;}