#include <iostream>

using std::cout;
using std::cin;
int main(){
    std::string name;
    cout <<"enter your name: ";
    std::getline (cin, name);
    /* if (name.length() > 12) {
        cout << "your name can't be over 12 letters";
    }
    else {
        cout << " welcome";
    }
    if (name.empty()){
        cout << "please enter a name";
    }
    else {
        cout << "big pp energy has been detected";
    }
    */
    name.append("@gmail.com");
    cout << name.find(" ");
    name.erase(name.find(" "),1);
    cout << "your gmail account is " <<name;
    
    return 0;
}