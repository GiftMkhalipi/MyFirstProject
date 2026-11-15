#include <iostream>
using namespace std;

int main() {
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign pointer with address of the firstvalue
    pPointer = &firstValue;
    *pPointer = 10; //Indirection

    //assign pointer with address of the secondvalue
    pPointer = &secondValue;
    *pPointer = 20; //Indirection

    cout << "firstValue is " << firstValue<< '\n';
    cout << "secondtValue is " << secondValue<< '\n';

    return 0;
}