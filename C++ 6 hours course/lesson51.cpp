#include <iostream>

using std::cout;
using std::cin;
using std::string;;

int factorialA(int num){
    int fact =1;
    for (int i = num; i > 0; i--){
        fact *= i;
    }
    return fact;
}

int factorialB(int num){
    if (num > 1){
        return num * factorialB(num-1);
    }
    else{
        return 1;
    }


}


int main(){
   
    cout << factorialB(8);

    return 0;
}