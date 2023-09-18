#include <iostream>

using std::cout;
using std::cin;

double square(double number){
    return number * number;
}
double cube(double number){
    return number * number * number;
}
std::string combinename(std::string string1, std::string string2){
    return string1 + " " + string2;
}
int main(){
    double num = 6.4;
    std::string name = "shuga";
    std::string surname = "shu";    
    cout << square(num) << '\n';
    cout << cube(num) << '\n';
    cout << combinename(name,surname);

   return 0;
}