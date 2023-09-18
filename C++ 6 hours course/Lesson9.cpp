#include <iostream>
#include <cmath>

using std::cout;
int main()
{
    double x = 5;
    double y = 3;
    double z;
    z = std::max(x,y);
    cout << z <<'\n';
    z = std::min(x,y);
    cout << z <<'\n';
    z = pow(2,6);
    cout << z <<'\n';
    z = sqrt(8);
    cout << z <<'\n';
    z = abs (-12);
    cout << z <<'\n';
    z = round(3.72);
    cout << z <<'\n';
    z = ceil(3.72);
    cout << z <<'\n';
    z = floor(3.72);
    cout << z <<'\n';



    return 0;
}