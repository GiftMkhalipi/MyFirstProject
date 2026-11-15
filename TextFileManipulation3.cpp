#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

// (v) Function prototype for reversing the string
string Reverse(string str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

int main() {
    // (i) The text file is assumed to be prepared and named "data.txt"
    string filename = "data.txt";
    
    // (ii) Open the text file and assign contents to string variable 'fileData'
    ifstream inputFile(filename);
    string fileData;

    if (!inputFile.is_open()) {
        cout << "Error: Could not open file. Make sure '" << filename << "' exists in the same directory." << endl;
        return 1;
    }

    // Read the first line from the file into fileData
    getline(inputFile, fileData); 
    inputFile.close();

    cout << "Original Statement: " << fileData << "\n\n";

    // (iii) Calculate and output the number of vowels
    int vowelCount = 0;
    for (char c : fileData) {
        // Convert character to lowercase to easily check for both 'a' and 'A', etc.
        char lowerC = tolower(c);
        if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // (iv) Calculate and output the number of words
    int wordCount = 0;
    stringstream ss(fileData);
    string tempWord;
    // The >> operator extracts words separated by spaces
    while (ss >> tempWord) {
        wordCount++;
    }
    cout << "Number of words: " << wordCount << endl;

    // (v) Output the statement in reverse using the Reverse function
    string reversedStatement = Reverse(fileData);
    cout << "Reversed Statement: " << reversedStatement << endl;

    // (vi) Capitalize the second letter of each word and output
    string capitalizedStatement = "";
    bool isSecondLetter = false;

    for (int i = 0; i < fileData.length(); i++) {
        char c = fileData[i];
        
        // If we hit a space, the next letter will be the first letter of a new word
        if (c == ' ') {
            isSecondLetter = false;
            capitalizedStatement += c;
        } else {
            if (isSecondLetter) {
                // Capitalize the letter
                capitalizedStatement += toupper(c);
                // Turn off the flag so we don't capitalize the 3rd letter
                isSecondLetter = false; 
            } else {
                capitalizedStatement += c;
                // The next character encountered will be the second letter
                isSecondLetter = true; 
            }
        }
    }
    
    cout << "Statement with 2nd letters capitalized: " << capitalizedStatement << endl;

    return 0;
}
