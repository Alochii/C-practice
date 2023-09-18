#include <iostream>

using std::cin;
using std::cout;

int main(){
    std::string students[] = {"alex","jhoana","klaus","marry","sammy"};
    for (int i = 0; i<= sizeof(students) /sizeof(std::string); i++){
        cout << students[i];

    }
    return 0;
}