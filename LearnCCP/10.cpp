#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   double pi = 3.14159265; // this is floating point number
   cout << fixed << setprecision(4);
      cout <<" The value of pi : " << pi << endl;
    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; // setw() sets the total width
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   
   cout << setfill('-'); // setfill() sets to fill the blanks with specified character
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   

   cout << setfill(' '); // setfill() sets to fill the blanks with specified character
   cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
   cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
   cout << scientific;  // set value in scientific format with exponent
   cout <<" The value of pi in scientific format is : " << pi << endl;
    return 0;
}