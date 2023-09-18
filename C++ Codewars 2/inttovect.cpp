#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    std::vector<int> n;
    long long int number{45762893920};
    cout << number<<endl;
    int digits = log10((float)number) + 1;
    cout << digits;
    int temp;
    for(long long int i = pow(10, digits-1); i > 0; i/=10){
    temp = number/i;
    number -= (number/i)*i;
    n.insert(n.begin(), temp);
    }
    for (int i = 0; i < n.size(); i++){
        cout << n.at(i);
    }
    return 0;
}