#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;
long long int power(long long int n){
    long long int ret{1};
    for (int i=0; i<n; i++){
        ret *= 2;
    }
    return ret;
}
int main(){
    long long int n = 36655;
    long long int lo{};
    unsigned int tracker{0};
    while (n != 0){
        lo = log2(n);
        cout << lo<<endl;
        n -= power(lo);
        tracker ++;
    }
    cout <<tracker;
    return 0;
}