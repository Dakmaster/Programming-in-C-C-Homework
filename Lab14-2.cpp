//Created and revised by Dakotah Jones on 12/17/23, Lab 14-2 Module 8
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getChoice();
void addRecords();
void displayTotal();

int main()
{
    int choice = 0;
    do
    {
        //get user coice;

        choice = getChoice();
        if (choice == 1)
            addRecords();
        else if (choice == 2)
            displayTotal();
    } while (choice != 3);
    return 0;
}

// function definations

int getChoice()
{
    //display menu and return choice
    int menuChoice = 0;
    cout << endl << "menue Options" << endl;
    cout << endl << "1: Add records" << endl;
    cout << endl << "2: Display Total Sales" << endl;
    cout << endl << "3: Exit" << endl;
    cout << endl << "Choice (1,2, or 3)? ";
    cin >> menuChoice;
    cin.ignore(100, '\n');
    cout << endl;
    return menuChoice;
}

void addRecords()
{
    //saves records to a sequentiql file

    string name = "";
    int sales = 0;
    ofstream outFile;

    //open file for append
    outFile.open("sales.txt", ios::app);
    if (outFile.is_open())
    {
        cout << "SalesPerson's name (X to stop): ";
        getline(cin, name);
        while (name != "X" && name != "x")
        {
            cout << " Sales : ";
            cin >> sales;
            cin.ignore(100, '\n');
            outFile << name << '#' << sales << endl;
            cout << "SalesPerson's name  (X to stop): ";
            getline(cin, name);
        }//end while
        outFile.close();
    }
    else
    {
        cout << "Sales.txt file could not be opened " << endl;
    }
}


void displayTotal()
{
    //calculates and display total sales.
    string name = "";
    int sales = 0;
    int total = 0;
    ifstream inFile;

    inFile.open("sales.txt", ios::in);
    if (inFile.is_open())
    {
        getline(inFile, name, '#');
        inFile >> sales;
        inFile.ignore();
        while (!inFile.eof())
        {
            total += sales;
            getline(inFile, name, '#');
            inFile >> sales;
            inFile.ignore();
        }//end of while
        inFile.close();
        cout << "Total Sales $" << total << endl << endl;
    }
    else
        cout << "Sales.txt file could not be opened " << endl;
}