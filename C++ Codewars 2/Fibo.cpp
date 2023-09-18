#include <iostream>
#include <vector>
using namespace std;
int main(){
    std::vector<int> fibo={1,0};
    int n = 8;
    for (int i = 0; i < n-1; i++){
        fibo.push_back(fibo[i]+fibo[i+1]);
        cout << fibo[i]<<endl;
    }
    cout << fibo.back();


    return 0;
}