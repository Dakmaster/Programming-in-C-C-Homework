#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int temperatures[7][2];
    double avg_high = 0, avg_low = 0;
    cout << "Enter the highest and lowest recorded temperatures for seven days\n";
    for (int i = 0; i < 7; i++) { //gets the input from user
        cout << "Day " << i + 1 << ": ";
        cin >> temperatures[i][0] >> temperatures[i][1];
    }
    for (int i = 0; i < 7; i++) { //calculates the average temperatures
        avg_high += temperatures[i][0];
        avg_low += temperatures[i][1];
    }
    avg_high /= 7;
    avg_low /= 7;
    cout << "average temperatures are " << fixed << setprecision(1) << avg_high << " and " << avg_low; //prints the calculated average temperatures 
}