#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Step 1: Create and open the file for writing
    fstream DataFile;
    DataFile.open("gift2.txt", ios::out);

    // Step 2: Write text into the file
    if (DataFile.is_open())
    {
        DataFile << "This is the Advanced Programming\n";
        DataFile << "And I love this module\n";

        DataFile.close();
    }
    else
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    // Step 3: Open the file for reading
    DataFile.open("gift2.txt", ios::in);

    // Step 4: Read and display the file contents
    if (DataFile.is_open())
    {
        string line;

        while (getline(DataFile, line))
        {
            cout << line << endl;
        }

        DataFile.close();
    }
    else
    {
        cout << "Error opening file for reading!" << endl;
    }

    return 0;
}
