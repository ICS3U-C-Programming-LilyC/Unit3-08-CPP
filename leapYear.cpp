// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/1/2023
// This program tells the user if the
// year they enter is a leap year.

#include <cstdlib>
#include <iostream>

int main() {
    // Declaring variables.
     std::string userYearAsString;

    // Getting user input.
     std::cout << "Enter a year: ";
     std::cin >> userYearAsString;

     // Initiating Try catch.
     try {
        // Converting the variable as a string to an integer.
         int userYearAsInteger = std::stoi(userYearAsString);
         // If statement to see if the year is % 4.
         if (userYearAsInteger % 4 == 0) {
            // If statement to see if the year is % 100.
            if (userYearAsInteger % 100 == 0) {
                // If statement to see if the year is % 400.
                if (userYearAsInteger % 400 == 0) {
                    std::cout << userYearAsInteger <<
                    " is a leap year. It will have 366 days.";
                    std::cin >> userYearAsInteger;
                    // Else it is a leap year.
                } else {
                    std::cout << userYearAsInteger <<
                    " is not a leap year. It will have 365 days.";
                }
            } else {
                // Else it is a leap year.
                std::cout << userYearAsInteger <<
                " is a leap year. It will have 366 days.";
            }
         } else {
            // Else it is not a leap year.
            std::cout << userYearAsInteger <<
            " is not a leap year. It will have 365 days.";
         }
    // Catch for errors with user input.
    } catch (std::invalid_argument) {
             std ::cout << userYearAsString <<
             " is not a valid input for a year.";
         }
}
