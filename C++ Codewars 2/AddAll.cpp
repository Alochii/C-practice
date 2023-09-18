#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    std::vector<int> vect = {1,2,3,4};
    int sum1{1};
    int sum2{0};
    int startSize = vect.size();
    for (int i = 0; i< startSize-1; i++){
        sum1 = vect[0]+vect[1];
        sum2 += sum1;
        int j = 0;
        vect.erase(vect.begin());
        vect[0] = sum1;
        std::sort (vect.begin(), vect.end());
    }
    cout << sum2;
    return 0;
}