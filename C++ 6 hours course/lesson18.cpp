#include <iostream>

using std::cout;
using std::cin;
int main(){
    std::string name;
    while (name.empty()){
        cout << "please enter your name";
        std::getline(cin,name);
    }
    cout << "hello " << name;
    
    return 0;
}