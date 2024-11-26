//Written by Dakotah Jones in 12/10/23, Ch. 13 Exercise 20
#include <iostream>
using namespace std;

int main()
{
    char code[10];
    char ch;
    int length;
    int flag;
    do
    {
        cout << "\nenter the region code :";
        cin >> code;
        length = 0;
        flag = 0;

        if (code[0] != 'A' && code[0] != 'B')
        {
            flag = 1;
        }

        for (int i = 0; code[i] != '\0'; i++)
        {
            length++;
            if (length > 3)
            {
                flag = 1;
                break;
            }
            int ascii = code[i];
            if (i > 0 && !(ascii >= 48 && ascii <= 57))   //ascii value of digits 0-9 is 48 to 57
            {
                flag = 1;
                break;
            }
        }
        if (length < 3)
        {
            flag = 1;
        }


        if (flag == 0)
        {
            int charge = (code[0] == 'A') ? 25 : 30;
            cout << "\n\nThe shipping charge is : $" << charge;
        }
        else
        {
            cout << "\nInvalid region code!!!";
        }
        cout << "\n\twant to enter more (y/n)?";
        cin >> ch;
    } while (ch != 'n');

    return 0;
}