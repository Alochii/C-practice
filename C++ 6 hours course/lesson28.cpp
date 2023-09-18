#include <iostream>

using std::cout;
using std::cin;
void toppings(std::string topping1, std::string topping2){
    cout << "here's your " << topping1 << " or " << topping2 << " pizza! \n";
}
void toppings(int topping1, std::string topping2){
    cout << "here's your " << topping1 << " and " << topping2 << " pizza! \n";
}
void toppings(std::string topping1){
    cout << "here's your " << topping1 << " pizza! \n";
}
int main(){
    toppings(15, "bread");
    toppings("mustard", "bread");
    toppings("mustard");
   return 0;
}