# sturdy-pancake
SNHU
Corner Grocer Item-Tracking Program
Introduction
The Corner Grocer item-tracking program is a C++ application designed to help the Corner Grocer store analyze their daily text records of purchased items. The primary goal is to determine the frequency of each item being purchased, allowing the store to rearrange their produce section in the most effective manner for their customers. The program is modular, maintainable, and user-friendly, offering a menu-driven interface for users to interact with the data.

Features
Read and process item data from an input file
Calculate item frequencies
Print a list of item frequencies
Display a text-based histogram of item frequencies
Create a backup file with item frequencies

Installation and Usage
Compile the program using a C++ compiler, such as g++ or Visual Studio.
Ensure that the input file CS210_Project_Three_Input_File.txt is present in the same directory as the compiled executable. This file should contain the item records, with each record on a new line.
Run the compiled executable.
Follow the on-screen menu options to search for an item's frequency, display the frequency list, display the histogram, or exit the program.

File Structure
ItemTracker.h: Header file for the ItemTracker class, which is responsible for managing and processing the item data.
ItemTracker.cpp: Implementation file for the ItemTracker class, containing the definitions of the member functions declared in the header file.
main.cpp: Main file for the program, providing a menu-driven user interface for interacting with the ItemTracker class to perform the required tasks.

Dependencies
The program relies on standard C++ libraries, such as <iostream>, <fstream>, <string>, <unordered_map>, and <iomanip>.

License
N/A

Contact
Ryan Williams - ryan.williams14@snhu.edu
