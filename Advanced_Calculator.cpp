#include <iostream>
#include <cmath>
using namespace std;
void prime_checker(int x);
int main()
{
    int flag = 0;
    cout << "ENTER THE NUMBER: ";
    double first_number;
    cin >> first_number;
    double output = first_number;
    while (flag == 0)
    {
        //int output = first_number;
        cout << "SELECT THE OPERATION:" << endl
             << "1.ADDITION" << endl
             << "2.SUBTRACTION" << endl
             << "3.MULTIPLICATION" << endl
             << "4.DIVISION" << endl
             << "5.SQUARE ROOT" << endl
             << "6.CHECK WHETHER NUMBER IS PRIME OR COMPOSITE" << endl
             << "7.SIN (IF ANGLE ENTERED IS IN DEGREE)" << endl
             << "8.COS (IF ANGLE ENTERED IS IN DEGREE)" << endl
             << "9.TAN (IF ANGLE ENTERED IS IN DEGREE)" << endl
             << "10.DISPLAY FINAL RESULT" << endl;
        int operation;
        cin >> operation;
        double number;

        switch (operation)
        {
        case 1:
            cout << "ENTER THE NUMBER: ";
            cin >> number;
            output += number;
            break;
        case 2:
            cout << "ENTER THE NUMBER: ";
            cin >> number;
            output -= number;
            break;
        case 3:
            cout << "ENTER THE NUMBER: ";
            cin >> number;
            output *= number;
            break;
        case 4:
            cout << "ENTER THE NUMBER: ";
            cin >> number;
            output /= number;
            break;
        case 5:
            output = sqrt(output);
            break;
        case 6:
            flag++;
            prime_checker(output);
            break;
        case 7:
            output = ((2 * M_PI) / 360) * output;
            output = sin(output);
            break;
        case 8:
            output = ((2 * M_PI) / 360) * output;
            output = cos(output);
            break;
        case 9:
            output = ((2 * M_PI) / 360) * output;
            output = tan(output);
            break;
        case 10:
            flag++;
            cout << "THE FINAL RESULT IS: " << output << endl;
            break;
        }
    }
    return 0;
}

void prime_checker(int x)
{
    int not_prime = 0;

    if (x == 1 || x == 0)
    {
        cout << x << " IS NEITHER PRIME NOT COMPOSITE" << endl;
    }
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {

            if (x % i == 0)
            {
                not_prime++;
            }
        }
        if (not_prime > 0)
        {
            cout << x << " IS COMPOSITE" << endl;
        }

        else
        {
            cout << x << " IS PRIME" << endl;
        }
    }
}