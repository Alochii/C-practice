#include <iostream>

using std::cout;
using std::cin;
int main(){
    srand(time(NULL));
    int null = (rand() % 69) + 1 ;
    cout << null;

    return 0;
}