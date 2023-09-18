#include <iostream>

using std::cin;
using std::cout;

double gettotal(double prices[], int size);

int main(){
    double prices[] = {17.3, 16.7,5.1,8,92.2};
    int size = sizeof(prices)/sizeof(prices[0]);
    cout << "your total is $" << gettotal(prices, size);

    return 0;
}
double gettotal(double prices[], int size){
    double runningtotal = 0;
    for (int i = 0; i < size; i++){
        runningtotal += prices[i];
    }
    return runningtotal;
}