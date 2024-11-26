#include <iostream>

using namespace std;

// function declarations
int getLowest(int number[], int numElements);
int main()
{

    // Creating an array
    int number[4] = { 13, 2, 40, 25 };

    // Dislaying the output
    cout << "The lowest number in the aray is  " << getLowest(number, 4) << "." << endl;

    return 0;
}

// This function will find the lowest elememt of an array
int getLowest(int numberArray[], int numElements)
{
    int low = numberArray[0];
    // Finding the lowest element of an array
    for (int i = 0; i < numElements; i++)
    {
        if (low > numberArray[i])
            low = numberArray[i];
    }
    return low;
}