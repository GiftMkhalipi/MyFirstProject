#include <iostream>
#include <limits>

using namespace std;

int main() {
    int userInput;
    bool validInput = false;

    while (!validInput) {
        cout << "Enter an integer value between 5 and 10" << endl;
        
        // Check if input is a valid integer
        if (cin >> userInput) {
            // Check if the integer is within range
            if (userInput >= 5 && userInput <= 10) {
                validInput = true;
            } else {
                cout << "You entered " << userInput << ". Please enter a number between 5 and 10." << endl;
            }
        } else {
            cout << "Sorry, you entered an invalid number, please try again" << endl;
            // Clear error flags and ignore the invalid input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "Your input value(" << userInput << ") has been accepted." << endl;

    return 0;
}
