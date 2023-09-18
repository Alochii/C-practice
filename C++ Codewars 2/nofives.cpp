#include <iostream>
using namespace std;
int ret(int a, int b){
    int count = b - a +1;
    for (int i=a; i<=b; i++){
        if ((i % 5 == 0 && i % 10 != 0) || ((i /10) % 5 == 0 && i > 10)){
            count --;
        }
    }
    return count;
}
int main(){
    int start = 4;
    int end = 17; // 22 - 15 - 5;
    cout << ret(start,end);
    return 0;
}