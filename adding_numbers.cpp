// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program adds two numbers that were given by the user

#include <iostream>

int main() {
    // This function adds two numbers
    int firstNumber;
    int secondNumber;
    int answer;

    // Input
    std::cout << "This program adds 2 numbers together." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    // Process
    answer = firstNumber + secondNumber;

    // Output
    std::cout << "" << std::endl;
    std::cout << firstNumber << " + " << secondNumber << " = " << answer
              << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
