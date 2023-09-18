#include <cmath>
#include <iostream>
using namespace std;
int main(){
    int num = 2;
    int value = num*(num-1) +1;
    int sum=0;
    for (int i = 0; i <num; i++){
        sum += value;
        sum+= 2*i;
    }
    cout << sum;

    return 0;

}