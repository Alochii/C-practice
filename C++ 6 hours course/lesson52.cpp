#include <iostream>

using std::cout;
using std::cin;
using std::string;;

template <typename T, typename U>
auto maxit(T x, U y){

    return (x>y) ? x : y;
}
int main(){

    cout << maxit (7 ,7.9);


    return 0;
}