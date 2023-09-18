#include <iostream>

using std::cout;
using std::cin;
int main(){
    for (int i=10000; i>=0; i-=1 ){
        
        if (i%69 == 0){
            break;
        }
        cout << i <<'\n';
    }
    cout << "HAPPY NEW YEAR!";
}