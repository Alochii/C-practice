#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
int main()
{
    double a;
    double b;
    double c;
    cout << "Whats the length A of your triangle?";
    cin >> a;
    cout << "And whats the length of side B?";
    cin >> b;
    c = sqrt (pow(a,2) + pow(b,2));
    cout << "the length of the hypothenus is " << c;



    return 0;
}