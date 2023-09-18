#include <iostream>
#include <iomanip>
using namespace std;

float seriesSum(int n)
{
    std::cout << std::fixed << std::setprecision(2);
    float denom {};
    float sum {};
    for (int i = 0; i < n; i++){
        sum += 1 / (1 +denom);
        denom += 3;
    }
    return sum;
}
std::string StringIt(float num){
    int temp = num * 100; 
    double y = ((float)temp) / 100;
    return std::to_string(y);
}
int main(){
    cout << StringIt(5.213);
    return 0;
}