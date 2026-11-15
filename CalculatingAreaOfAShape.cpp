#include <iostream>

using namespace std;

// Function prototypes
void calculateSquare();
void calculateRectangle();
void calculateTriangle();

int main() {
    int choice;

    while (true) {
        cout << "\nPlease select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "\nEnter selection: ";
        
        cin >> choice;

        switch (choice) {
            case 1:
                calculateSquare();
                break;
            case 2:
                calculateRectangle();
                break;
            case 3:
                calculateTriangle();
                break;
            case 4:
                cout << "Quitting program." << endl;
                return 0;
            default:
                cout << "Your input was: " << choice << " which is an invalid input" << endl;
                cout << "Please enter a valid input!!!" << endl;
                break;
        }
    }
    return 0;
}

void calculateSquare() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of the square is: " << side * side << endl;
}

void calculateRectangle() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Area of the rectangle is: " << length * width << endl;
}

void calculateTriangle() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "Area of the triangle is: " << 0.5 * base * height << endl;
}


