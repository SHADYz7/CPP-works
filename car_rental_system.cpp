#include <bits/stdc++.h>
using namespace std;
class car
{
    static int counter, index;
    string car_name[100], car_rent[100], Full_Name[100], return_date[100];
    int issue_time[100], c;

public:
    string printStrongNess()
    {
        string input;
        cin >> input;
        int n = input.length();
        // Checking lower alphabet in string
        bool hasLower = false, hasUpper = false;
        bool hasDigit = false, specialChar = false;
        string normalChars = "abcdefghijklmnopqrstu"
                             "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
        for (int i = 0; i < n; i++)
        {
            if (islower(input[i]))
                hasLower = true;
            if (isupper(input[i]))
                hasUpper = true;
            if (isdigit(input[i]))
                hasDigit = true;
            size_t special = input.find_first_not_of(normalChars);
            if (special != string::npos)
                specialChar = true;
        }
        // Strength of password
        cout << "Strength of password -> ";
        if (hasLower && hasUpper && hasDigit &&
            specialChar && (n >= 8))
            cout << "Strong" << endl;
        else if ((hasLower || hasUpper) &&
                 specialChar && (n >= 6))
            cout << "Moderate" << endl;
        else
            cout << "Weak" << endl;
        return input;
    }
    char *search_name(char const *s)
    {
        int len = strlen(s);
        char *p = new char[len + 1];
        strcpy(p, s);
        // cout << s << endl;
        return p;
    }
    void data_name()
    {
        int count;
        string *name, *surname;
        string fullName[100];
        char *p;
        // Manually insert the name to find in the system
        p = search_name("Pratham Mehta");
        cout << "Total number of car rentals" << endl;
        cin >> count;
        c = count;
        name = new string[count];
        surname = new string[count];
        time_t now = time(0);
        char *d = ctime(&now);
        tm *g = gmtime(&now);
        d = asctime(g);
        for (int i = 0; i < count; i++)
        {
            cout << "\n\nEnter the name of car rental " << ++index << endl;
            cin >> name[i];
            cin >> surname[i];
            fullName[i] = name[i] + " " + surname[i];
            Full_Name[i] = fullName[i];
            // Assuming we've all cars in the world
            // If assumptions are not made then we've to build a separate database for storing available cars and fixing there rental price
            cout << "Which car is rented by " << fullName[i] << " ?" << endl;
            cin >> car_name[i];
            cout << "What is the cost of rental per day ?" << endl;
            cin >> car_rent[i];
            cout << "Date and Time : " << d << endl;
            cout << "Enter date of return : ";
            cin >> return_date[i];
        }
        cout << "If you want to search the rental then Press 'S', otherwise 'E' to exit." << endl;
        char var;
        cin >> var;
        // To get the detail of rental
        index = 0;
        if (var == 'S' || var == 's')
            for (int i = 0; i < count; i++)
            {
                // cout << name[i] << " " << surname[i] << endl;
                if (p == fullName[i])
                {
                    cout << "Name Found at " << ++index << " position -> " << fullName[i] << endl;
                    return;
                }
                else
                    cout << "Name Not Found" << endl;
            }
        else if (var == 'E' || var == 'e')
            return;
    }
    void print_details()
    {
        cout << "\n****************DETAILS****************" << endl;
        cout << "______|      NAME     |  CAR RENTED  | PER DAY COST\n";
        for (int i = 0; i < c; i++)
            cout << ++counter << " | " << Full_Name[i] << "         |  " << car_name[i] << "  |  " << car_rent[i] << " | " << endl;
    }
};
int car::counter;
int car::index;
int main()
{
    car C;
    string input, username_check, user;
    cout << "Enter your password to create an account and to make sure you're not a robot but a Human." << endl;
    cin >> input;
    cout << "Enter the password again for confirmation" << endl;
    string password_check = C.printStrongNess();
    if (password_check == input && username_check == user)
    {
        C.data_name();
        // C.search_name("Pratham Mehta");
        C.print_details();
    }
    return 0;
}
// Password for the system
// Current IST
// Return Day Profit
// Cost reduction
