#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char filename[100], userInput[500];
   cout << "Enter the file name to write to (e.g., output.txt): ";
   cin >> filename;
    ofstream outFile("c:/pl/mihifile.txt");

    if (!outFile) {
        cout << "Error: Unable to open file for writing!" <<endl;
        return 1;
    }

    cin.ignore();

    cout << "Enter text to write to the file (press Enter to finish):" << endl;


    cin.getline(userInput, sizeof(userInput));


    outFile << userInput;


    outFile.close();

    cout << "Text has been written to the file successfully." << endl;

    return 0;
}
