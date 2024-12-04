#include <iostream>
#include <fstream> // For file handling

int main() {
    char filename[100], userInput[500];

    // Ask for the file name
    std::cout << "Enter the file name to save to (e.g., output.txt): ";
    std::cin >> filename;

    // Save (write) to the file
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cout << "Error: Unable to open file for writing!" << std::endl;
        return 1;
    }

    // Clear input buffer before taking user input
    std::cin.ignore();
    std::cout << "Enter text to save in the file (press Enter to finish):" << std::endl;
    std::cin.getline(userInput, sizeof(userInput));

    // Write to the file
    outFile << userInput;
    outFile.close();
    std::cout << "Text has been saved successfully.\n" << std::endl;

    // Open (read) the file
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cout << "Error: Unable to open file for reading!" << std::endl;
        return 1;
    }

    std::cout << "Contents of the file:" << std::endl;

    // Read and display the contents of the file
    char ch;
    while (inFile.get(ch)) {
        std::cout << ch;
    }
    inFile.close();

    return 0;
}
