/*
 Developer: Ryan A. Williams
      Date: 4/12/2023
   Purpose: ItemTracker class implementation file. It contains the definitions of the
            member functions declared in the ItemTracker class.
 */

// ItemTracker.cpp
#include "ItemTracker.h"
#include <iostream>
#include <fstream>
#include <sstream>

// Load items from input file and update frequencies
void ItemTracker::loadItemsFromFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    if (inputFile.is_open()) {
        std::string item;
        while (inputFile >> item) {
            itemFrequency[item]++;
        }
        inputFile.close();
    }
    else {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        exit(1);
    }
}

// Get frequency of a specific item
int ItemTracker::getItemFrequency(const std::string& item) {
    if (itemFrequency.find(item) != itemFrequency.end()) {
        return itemFrequency[item];
    }
    else {
        return 0;
    }
}

// Print the frequency list of items
void ItemTracker::printFrequencyList() {
    for (const auto& item : itemFrequency) {
        std::cout << item.first << " " << item.second << std::endl;
    }
}

// Print a histogram of item frequencies
void ItemTracker::printHistogram() {
    for (const auto& item : itemFrequency) {
        std::cout << item.first << " ";
        for (int i = 0; i < item.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Create a backup file with item frequencies
void ItemTracker::createBackupFile(const std::string& filename) {
    std::ofstream backupFile(filename);
    if (backupFile.is_open()) {
        for (const auto& item : itemFrequency) {
            backupFile << item.first << " " << item.second << std::endl;
        }
        backupFile.close();
    }
    else {
        std::cerr << "Error: Unable to create the backup file." << std::endl;
        exit(1);
    }
}