#include <iostream>

using std::cin;
using std::cout;

int main (){
    std::string foods[150];
    fill(foods,foods + 150, "pizza");
    int i = 0;
    for (std::string food : foods) {
        cout << food << '\n'; 
        i+=1;
        cout << i << '\n';
    }

    return 0;
}