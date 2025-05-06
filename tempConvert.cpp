// Copyright (c) 2025 Angel all rights reserved
// Created by: Angel
// Created by: May 05, 2025
// This program asks the user for their temperature in
// celsius and converts the temperature in fahrenheit.

#include <iostream>

void CalculateTemp() {
    try {
        float userTemp;
        float tempFahrenheit;

        std::cout << "Enter the temperature (c): ";
        std::cin >> userTemp;

        // calculates the the temperature in fahrenheit
        tempFahrenheit = (9 / 5) * userTemp + 32;

        // # prints out the output
        std::cout << "The temperature is " << tempFahrenheit <<
               "F" << std::endl<< std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << "This cannot be!" << std::endl;
    }
}


int main() {
    // this function calls the other function

    // Calls the function
    CalculateTemp();
}
