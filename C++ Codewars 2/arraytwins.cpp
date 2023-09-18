#include <iostream>
using namespace std;
struct dual{
    string first;
    string second;
};

int main(){
    dual names[] ={{"adam","zelinsky"},{"jonathan","matroshca"}};
    int x = 1;
    cout << names[x].first<<endl;
    return 0;
}