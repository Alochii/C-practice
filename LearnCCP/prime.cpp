#include <iostream>
#include <cassert>
#include <cmath>

bool isPrime(int x)
{
    int temp = x;
    if (temp == 0 || temp == 1){
        return false;
    }
    for (int i = sqrt(x); i > 1; i--){
        std::cout << "temp : "<<temp<<std::endl;
        std::cout <<"i : "<<i<<std::endl;
        if (temp % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}