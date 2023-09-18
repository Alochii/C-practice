#include <iostream>
using namespace std;

int main(){
    if (false ^ false){
        cout << true;
    }
    else {
        cout << false;
    }
    return 0;
}