#include <iostream>

std::string top1="mustard";
std::string top2="soy";

using std::cout;
using std::cin;
void toppings(std::string topping1, std::string topping2){
    cout << "here's your " << topping1 << " or " << topping2 << " pizza! \n";
}
void toppings(std::string topping1){
    cout << "here's your " << topping1 << " pizza! \n";
}
int main(){
    std::string top2="cheese";
    std::string top3="chilly hot sauce";
    toppings(top1, top2);
    toppings(top3);
   return 0;
}