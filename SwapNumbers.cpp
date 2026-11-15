//Pass by Reference Program

#include <iostream>
using namespace std;

// Pass by reference using reference variables (&)
void SwapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int varA = 25;

        int varB = 100;

    cout << "varA before swap: " << varA << endl;  // 25
    cout << "varB before swap: " << varB << endl;  // 100

    SwapNumbers(varA, varB);

    cout << "varA after swap: " << varA << endl;   // 100
    cout << "varB after swap: " << varB << endl;   // 25

    return 0;
}

//Pass By Pointers Program

/*#include <iostream>
using namespace std;

// Pass by reference using pointers (*)
void SwapNumbers(int *a, int *b) {
    int temp = *a;   // dereference to get value
    *a = *b;
    *b = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;  // 25
    cout << "varB before swap: " << varB << endl;  // 100

    SwapNumbers(&varA, &varB);   // pass addresses

    cout << "varA after swap: " << varA << endl;   // 100
    cout << "varB after swap: " << varB << endl;   // 25

    return 0;
}*/



