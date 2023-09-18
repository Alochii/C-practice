#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    string name = "shuga";
    string *pname = nullptr;
    pname = &name;
    if (pname == nullptr){
        cout << "pointer was not assigned";
    }
    else {
        cout <<"pointer was assigned " << *pname;
    }
    






    return 0;
}