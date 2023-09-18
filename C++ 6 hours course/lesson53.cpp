#include <iostream>

using std::cout;
using std::cin;
using std::string;;



struct racers{
    string name;
    int position;
    bool qualified;
};

int main(){
    racers ali;
    ali.name = "ali";
    ali.position = 1;
    ali.qualified = 1;
    cout << ali.name;



    return 0;
}