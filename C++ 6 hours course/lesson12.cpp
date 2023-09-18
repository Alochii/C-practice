#include <iostream>
#include <cmath>

using std::cout;
int main()
{
    int income;
    cout << "how much do you make a month?";
    std::cin >> income;
    switch(income){
        case 0:
        std::cout << "brokie";
        break;
        case 1000:
        std::cout << "enough to manage";
        break;
        case 10000:
        std::cout <<"you can live wherever you want";
        break;
        case 100000:
        std::cout <<"you're rich and wealthy. you won";
        break;
        case 500000:
        std::cout <<"andrew tate mode";
        break;
    }

    return 0;
}