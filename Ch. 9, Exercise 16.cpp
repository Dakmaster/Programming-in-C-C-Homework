#include <iostream>
using namespace std;

int main() 
{
    
    int number, square, cube;
    
    cout << "Number | Square | Cube\n" << "------ ------ ----\n";

    for (number = 10; number <= 13; number++) 
    {
        square = number * number;
        cube = number * number * number;
        cout << number << " " << square << " " << cube << endl;
    }

    return 0;
}
