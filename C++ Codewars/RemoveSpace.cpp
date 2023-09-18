#include <string>
#include <iostream>

using namespace std;


string remov(string x){
    while (x.find(" ") < 12) {
        x.erase(x.find(" "),1);
        cout << "test";
    }
    cout << "done";
    return x;
}
int main(){
    string x = "he llo   lo se rs";

    
    cout << remov(x);
//    x.erase(x.find(" "),1);
    return 0;
}