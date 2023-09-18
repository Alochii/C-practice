#include <iostream>

using std::cout;
using std::cin;
int main(){
    char unit;
    double temp;
    cout << "****** Temprature conversion program ******" << '\n';
    cout << "Enter F to convert to fahrenheit, C to convert to Celcius" << '\n';
    cin >> unit;
    cout << "Enter the temprature";
    cin >> temp;
    if (unit == 'F' || unit == 'f'){
        temp = 1.8 * temp + 32;
        cout << "the temprature is " << temp << " degrees" << 'F' << '\n';
    }
    else if (unit == 'C' || unit == 'c'){
        temp = (temp -32) /1.8;
        cout << "the temprature is " << temp << " degrees" << unit << '\n';
    }
    else {
        cout << "you did something wrong, please only enter C or F for the unit, and numbers for the temprature" << '\n';
    }
    
    cout << "*******************************************";
}