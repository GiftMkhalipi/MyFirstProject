#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    Person Jane = person("Jane", 60.0f);
    Person John = person("John", 75.0f);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    return 0;
}


/*4) Overload the following relational operators using mFirstName

• ==
• ==*/

if (Jane == John) {
    cout << "This is the same person" << endl;
}
if (Jane != John) {
    cout << "This is NOT the same person" << endl;
}

/*(e) Overload the following relational operators using mAge.

Then add the following to the main function implemented in 2(c)

```cpp*/
if (Jane < John) {
    cout << "Jane is younger than John" << endl;
}
if (John > Jane) {
    cout << "John is older than Jane" << endl;
}


• operator_keyword conversion_type()

3. Within the Person class declared in the header file 2(a), add the following declaration

//```cpp
operator int ();


/*Within the Person.cpp file, define the conversion operator declared above, as follows:

```cpp*/
Person::operator int()
{
    return mAge;
}

Add the following to the main function implemented in 2(c).

//```cpp
int johnAge = John;
cout << "John's Age: " << johnAge << endl;
```

4. Within the Person class declared in the header file in 2(a), add the appropriate conversion operator declarations and definitions (within Person.cpp) so that you then add the following to the main function implemented in 2(c)

//```cpp
string janeFirstName = Jane;
cout << "Jane's FirstName" << janeFirstName << endl;

float janeWeight = Jane;
cout << "Jane' weight" << janeWeight << endl;


