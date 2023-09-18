#include <iostream>
#include <cmath>
using namespace std;
float nthnum(int n){
    float count = 1;
    for (int i=1; i<n; i++){
        count += (1/ (1+(3*double(i))));
    }
    return round(count*100) / 100;
}
int main(){
    int nth = 5;
    cout << nthnum(nth);
    return 0;
}