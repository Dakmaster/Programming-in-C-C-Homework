//Created by Dakotah Jones on 11/26/23, Ch. 10 Exercise 16
#include <iostream>
#include <iomanip>
using namespace std;
double calculateGrossPay(int, double);
int main()
{     
int noOfHoursWorked;     
double hourlyPayRate;
while(true)
{
	cout << "Enter information for employee" << endl;
	cout << "Enter the number of hours employee worked: ";
	cin >> noOfHoursWorked;
	if(noOfHoursWorked < 0)
		break;
	cout << "Enter hourly pay rate: ";
	cin >> hourlyPayRate;
	if(hourlyPayRate < 0)             
		break;
	cout << fixed << setprecision(2);
	cout << "Gross pay: $" << calculateGrossPay(noOfHoursWorked, hourlyPayRate) << endl;
	cout << endl;     
}     return 0; }
double calculateGrossPay(int hoursWorked, double payRate)
{
	double pay = 0;      

	if(hoursWorked >= 1 && hoursWorked <= 37)
	{         
		pay = hoursWorked * payRate;     
	}
	else if (hoursWorked >= 38 && hoursWorked <= 50)
	{
		pay = 37 * payRate;
		pay += 1.5 * (hoursWorked - 37) * payRate;     
	}
	else
	{
		pay = 37 * payRate;
		pay += 1.5 * (50 - 37) * payRate;
		pay += 2 * (hoursWorked - 50) * payRate;
	}     return pay; 
}