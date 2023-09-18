#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string str = "12444444444444";
    long long num{0};
    for (int i=0; i < str.length(); i++){
        cout << "1 "<<(str[i] -'0')<<endl;
        cout << "2 "<<str.length()<<endl;
        num+= (str[i] -'0') * (pow(10,str.length()-i-1));
        cout << num<<endl;
    }
    return 0;
}