#include <iostream>
#include <algorithm>
#include <cstdint>
#include <string>

using namespace std;

bool myfunction (int i,int j) { return (i>=j); }
string binarythis(int number){
    string str{};
    while (number !=0){
        str.append(to_string(number%2));
        number /= 2;
        cout << number%2;
    }
    reverse(str.begin(),str.end());
    cout << str<<endl;
    return str;
}
std::string add_binary(uint64_t a, uint64_t b) {
    return binarythis(a+b);
}


int main(){
    int a = 10;
    int b = 10;
    cout << add_binary(10,0);
    return 0;
}