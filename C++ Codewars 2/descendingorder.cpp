#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
uint64_t descendingOrder(uint64_t a)
{
    string beginstring = to_string(a);
    int check{0};
    for (long long int j = beginstring.length() -1; j >= 0 ; j--){
        for (long long int i = beginstring.length()-1; i >= 0 ; i--){
        if (beginstring[i]< beginstring[i+1]){
            std::swap (beginstring[i], beginstring[i+1]);
            check += 1;
        }
        }
        if (check == 0){
        break;
        }
    check = 0;
    }
    a = 0;
    for (int i=0; i < beginstring.length(); i++){
            a+= (beginstring[i] -'0') * (pow(10,beginstring.length()-i-1));
    }
    return (a);
}
int main(){
    cout << descendingOrder(919877652131232151);
    return 0;
}