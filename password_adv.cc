// Advanced Password Program
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int num, i = 0, password, j = 1;
    srand(time(0));
    password = rand();
    do
    {
        cout << "\n\n\t\t\tPassword range: (0, 32767)" << endl;
        cout << "\t\t\tYou'll get 20 attempts to crack the password" << endl;
        cout << "Enter Password" << endl;
    } while (i == 200000);
    // ! This number is not in range of int values and hence loop will only run one time

    if (j < 20)
    {
        if (i == 1)
        {
        jump:
            cout << "Enter the Password again" << endl;
        }
        i = 1;
        //  Assigning i = 1 to secure the jump statement
        cin >> num;
    }
    if (num == password)
    {
        cout << "\n\nYou cracked the Password in " << j << " attempts !!\n\n";
        cout << "The password was " << password;
    }
    switch (num < 32767)
    {
    case 0:
        cout << "Your number is not in range of 0 to 32767" << endl;
        j++;
        goto jump;
        break;
    case 1:
        if (j < 20)
        {
            if (num < password)
            {
                cout << "Your number is smaller than the Password" << endl;
                j++;
                goto jump;
            }
            else if (num > password)
            {
                cout << "Your number is greater than the Password" << endl;
                j++;
                goto jump;
            }
        }
        else if (num != password)
        {
            cout << "ERROR : TRY AGAIN !!\nNow the Password will reset\n\n";
        }
    }
    return 0;
}