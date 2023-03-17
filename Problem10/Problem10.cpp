#include <iostream>

using namespace std;

int main() 
{
    double temp;
    char unit;

    cout << "Enter a temperature value: ";
    cin >> temp;

    cout << "Enter C for Celsius or F for Fahrenheit: ";
    cin >> unit;

    if (unit == 'C') {
        if (temp <= 0) {
            cout << "Water is solid at sea level." << endl;
        }
        else if (temp >= 100) {
            cout << "Water is gaseous at sea level." << endl;
        }
        else {
            cout << "Water is liquid at sea level." << endl;
        }
    }
    else if (unit == 'F') {
        if (temp <= 32) {
            cout << "Water is solid at sea level." << endl;
        }
        else if (temp >= 212) {
            cout << "Water is gaseous at sea level." << endl;
        }
        else {
            cout << "Water is liquid at sea level." << endl;
        }
    }
    else {
        cout << "Invalid unit entered." << endl;
    }

    return 0;
}