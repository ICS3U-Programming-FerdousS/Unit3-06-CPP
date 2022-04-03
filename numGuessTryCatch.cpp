// Copyright (c) 2022 Ferdous Sediqi All rights reserved.
// Created by: Ferdous
// Created on: Sep 2022
// This program we asks the user for a random number 0-9
// we use try and catch statements to see if user entered
// an integer or a string as well as as displaying the answer
// for random number

#include <iostream>
// including string
#include <string>
// including random for random number generator.
#include <random>
main() {
    int someRandomNumber;
    std::random_device rseed;

    // this function uses a try statement
    std::string integerAsString;
    int integerAsNumber;

    // input
    std::cout << "Enter a number 0-9: ";
    std::cin >> integerAsString;

    // set random number range
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);
    someRandomNumber = idist(rgen);
    // using try to check types of user input
    try {
        integerAsNumber = std::stoi(integerAsString);
        std::cout << integerAsNumber <<" is  an integer ";
    } catch (std::invalid_argument) {
        std::cout << integerAsString <<" was not an integer";
    }
    // check for random number input from user
    if (integerAsNumber == someRandomNumber) {
      std::cout << " and you guessed the right number!" << std::endl;
    } else {
       std::cout << " but, you guessed it wrong. The right number was "
      << someRandomNumber << std::endl;
    }
}
