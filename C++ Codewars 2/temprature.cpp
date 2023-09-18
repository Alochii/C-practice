#include <iostream>
#include <iomanip>

int main(){
    float tempMaxPerDay[365]{};
    std::cout << std::setprecision(2) <<std::fixed;
    tempMaxPerDay[17]= 242.21;
    std::cout << tempMaxPerDay[17];
    return 0;
}