#include <iostream>
#include <cmath>
using namespace std;
bool narcissist(int num){
    string str = to_string(num);
    int sum{0};
    for (int i=0; i<str.length(); i++){
        sum += pow(str[i]-'0',str.length());
    }
    if (sum == num) return true;
    return false;
}
int main(){
    int num = 1652;
    cout << narcissist(num);
    return 0;
}