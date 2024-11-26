//Written by Dakotah Jones in 12/10/23, Ch. 13 Exercise 21
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string city_name, state_name, zip_code;
    while (true)
    {
        cout << "Enter city (blank to finish): ";

        getline(cin, city_name);
        if (city_name == "") return 0;
        cout << "Enter state: ";

        getline(cin, state_name);
        cout << "Enter zip code: ";

        getline(cin, zip_code);
        cout << city_name + ", " + state_name + "  " + zip_code << '\n';
    }
}