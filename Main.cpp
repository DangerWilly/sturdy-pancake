/*
 Developer: Ryan A. Williams
      Date: 4/12/2023
   Purpose: Main file for the Corner Grocer item-tracking program. This file
            provides a menu-driven user interface for interacting with the
            ItemTracker class to perform the required tasks.
 */
// main.cpp
#include <iostream>
#include <sstream>
#include "ItemTracker.h"

// Read an integer input from the user with a prompt
int readInt(const std::string& prompt) {
    int result;
    std::string input;
    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        if (iss >> result) {
            return result;
        }
        else {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        }
    }
}

int main() {
    ItemTracker tracker;
    // Load items from input file
    tracker.loadItemsFromFile("CS210_Project_Three_Input_File.txt");
    // Create backup file with item frequencies
    tracker.createBackupFile("frequency.dat");

    int option;
    std::string item;

    do {
        std::cout << "1. Search for an item frequency\n";
        std::cout << "2. Display the frequency list\n";
        std::cout << "3. Display the histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "\nEnter your option: ";
        option = readInt("");

        switch (option) {
        case 1:
            std::cout << "\nEnter the item you wish to look for: ";
            std::getline(std::cin, item);
            std::cout << "\nFrequency of " << item << ": " << tracker.getItemFrequency(item) << std::endl;
            break;
        case 2:
            tracker.printFrequencyList();
            break;
        case 3:
            tracker.printHistogram();
            break;
        case 4:
            std::cout << "\nExiting the program..." << std::endl;
            break;
        default:
            std::cout << "\nInvalid option. Please try again." << std::endl;
            break;
        }
    } while (option != 4);

    return 0;
}