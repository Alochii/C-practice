#include <iostream>
using namespace std;
int main(){
    
    int num = 12345;
    string str = to_string(num);
    string outstr{};
    int doubled;
    for (int i=0; i< str.length();i++){
        outstr += to_string((str[i] - '0') * (str[i] - '0'));
    }
    cout << stoi(outstr);

    return 0;
}