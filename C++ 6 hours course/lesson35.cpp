#include <iostream>

using std::cin;
using std::cout;

int main(){
    std::string students[] = {"alex","jhoana","klaus","marry","sammy"};

    for (std::string student : students){
        cout << student << '\n';
    }
    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        cout << students[i] << '\n';
    }

    return 0;
}