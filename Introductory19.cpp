//Made by Dakotah Jones on 12/17/23 Exercise 19 Module 8
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    
    fout.open("Introductory19.txt", std::ofstream::app);

    double payroll;

    cout << "Enter payroll amounts (-1 to end): " << endl;
    // loop to input payroll amounts until -1 is entered
    do
    {
        cin >> payroll;
        if (payroll != -1) // if payroll != -1, output it to file with a new line at the end
            fout << payroll << endl;

    } while (payroll != -1);

    fout.close();

    return 0;
}