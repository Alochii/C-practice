#include <iostream>

using std::cout;
using std::cin;
int main(){
    std::string name;
    do{
        cout << "please enter your name";
        std::getline(cin,name);
    }while (name.empty());

    cout << "hello " << name;
    while (1==1){
        
    }
    return 0;
}