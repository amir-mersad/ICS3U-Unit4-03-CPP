// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program asks the user for a positive integer,
//  then gives the user the squared result

#include <iostream>
#include <cmath>


int main() {
    // This program asks the user for a positive integer,
    //  then gives the user the squared result
    std::string number_str;
    int number;
    int result = 0;
    int counter = 0;

    // Input
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number_str;

    // Process and Output
    try {
        number = std::stoi(number_str);
        if (number >= counter) {
            for (counter = 0; counter <= number; counter++) {
                result = pow(counter, 2);
                std::cout << counter <<"² = {1}" << result << std::endl;
        }} else {
            std::cout << "number should be positive!" << std::endl;
    }} catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
    }
}
