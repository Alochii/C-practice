#include <iostream>
int divisors(int n){  
    int count{0};
    for (int i= 1; i<=n; i++){
        if (n % i == 0){
            count ++;
        }
    }
    return count;
}
int main(){
    int a = 30;
    std::cout << divisors(a);
    return 0;
}