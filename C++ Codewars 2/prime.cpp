#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num = 4;
    for (int i=2; i <=sqrt(num) ; i++){
        std::cout << "i :" <<i << " , val :"<<num / (double) i<<" , int : "<<  num / i<<std::endl;

        if ( num / (double) i == num / i){
            cout << " no prime"<<endl;
            break;
        }
    }

    return 0;
}