#include <iostream>
using namespace std;
int persistentbugger(int num){
    std::string tempname{};
    int output{0};
    while (num / 10 > 0){
        tempname = to_string(num);
        num = 1;
        output ++;
        for (int i=0; i<tempname.size(); i++){
        num *= tempname[i] -'0';
        }
    }
    return output;
}

int main(){
    cout << persistentbugger(39);
    return 0;
}