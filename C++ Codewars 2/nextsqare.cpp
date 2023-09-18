#include <iostream>
#include <cmath>
using namespace std;
long nextperfect(long a){
    int b;
    b = (sqrt(a) + 1) * (sqrt(a) + 1);
    return b;
}
int main(){
    cout << nextperfect(25);
    return 0;
}