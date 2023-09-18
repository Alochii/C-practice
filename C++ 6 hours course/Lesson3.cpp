#include <iostream>

int main(){
    const double pi=3.141592653589793238462643383279504;
    double r = 100;
    double circumfrance = 2 * pi * r;
    std::cout <<circumfrance <<"cm or " << circumfrance / 100 << "m";

    return 0;
}