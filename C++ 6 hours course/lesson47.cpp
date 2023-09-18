#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    string name = "shuga";
    string *pName = &name;
    cout << *pName;






    return 0;
}