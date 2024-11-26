//Created by Dakotah Jones on 12/17/23 Exercise 20 Module 8
#include<iostream>
#include <iomanip>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;  
    ifstream fin;
    double data;
    fin.open("Introductory.txt");
    fout.open("Introductory.txt", ios::app); 
    if (fin.is_open()) {
        while (1) {
            cin >> data;
            if (data < 0)
                break;
            fout << fixed;
            fout << setprecision(2) << data << "\n";
        }
    }
    fin.close();
    fout.close(); 
    return 0;
}