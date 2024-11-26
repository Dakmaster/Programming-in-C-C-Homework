//Created by Dakotah Jones on 12/3/23, Ch. 12 Lab 12-2
#include <iostream>
using namespace std;

int main()
{
	int shipCharges[3][2] = { {50, 20},
								{100, 10},
									{999999, 0} };
	int numbOrdered = 0;
	int rowSub = 0;

	cout << "Number ordered " << "{negative number or 0 to end): ";
	cin >> numbOrdered;
	while (numbOrdered > 0 && numbOrdered <= 999999)
	{
		//search array
		rowSub = 0;
		while (rowSub < 3 &&
			numbOrdered > shipCharges[rowSub][0])
			rowSub += 1;
		//end while
		cout << "Shipping charge for a quantity of "
			<< numbOrdered << " is $"
			<< shipCharges[rowSub][1] << endl << endl;

		cout << "Number ordered " <<
			"(negative number or 0 to end): ";
		cin >> numbOrdered;
		//end while
	}
	return 0;
} //end of main function