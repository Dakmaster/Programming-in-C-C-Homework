//Written by Dakotah Jones in 12/10/23, Ch. 13 Exercise 25
#include <iostream>
#include <string>
using namespace std;
int main() {
  
    string str;
 
    cout << "Enter a String: ";
    getline(cin, str);
    int i;
    cout << "The reversed String is: ";

    for (i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}