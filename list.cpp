// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program generates 10 random
// numbers and display the smallest

// Including modules
#include <time.h>
#include <iostream>
#include <list>
using std::string;


// Defining the function that returns the min value

float calcAverage(std::list<int> someList) {
       float sum = 0;
       float average;
       // the for..each loop
       for (int aNum : someList) {
             sum += aNum;
       }
       average = sum / someList.size();
       return average;
}

// Defining the main function
int main() {
       // Defining the variables and list
       std::list<int> listOfInt;
       int userInt;
       std::string userMark;
       float avg;

       do {
           std::cout << "Enter a mark: ";
           std::cin >> userMark;
           if (userMark =="-1") {
                  break;
           } else {
                   try {
       // Casting to int
       userInt = std::stoi(userMark);
       listOfInt.push_back(userInt);
       } catch (std::invalid_argument) {
      // The user did not enter a number
      std::cout << "Invalid input.\n";
      std::cout << "Please enter a real number or -1\n";
      std::exit(EXIT_FAILURE);
}
           }
       } while (true);

       // Finding the min number
       avg = calcAverage(listOfInt);

       std::cout << "\nThe average is " << avg;
}
