/*
 Developer: Ryan A. Williams
      Date: 4/12/2023
   Purpose: ItemTracker class header file. This class is responsible for managing
            item frequencies, printing the frequency list, and printing the histogram.
 */
#pragma once
// ItemTracker.h
#ifndef ITEM_TRACKER_H
#define ITEM_TRACKER_H

#include <string>
#include <map>

class ItemTracker {
private:
    std::map<std::string, int> itemFrequency; // Store item frequencies

public:
    void loadItemsFromFile(const std::string& filename); // Load items from input file
    int getItemFrequency(const std::string& item); // Get frequency of an item
    void printFrequencyList(); // Print list of item frequencies
    void printHistogram(); // Print a histogram of item frequencies
    void createBackupFile(const std::string& filename); // Create backup file with frequencies
};

#endif // ITEM_TRACKER_H