#include <iostream>

using std::cin;
using std::cout;
void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){

    std::string x = "beanies ";
    std::string y= "bunny baby <3 ";
    swap(x,y);
    cout << "X : " << x  << "and Y : " << y;


   

    return 0;
}