#include <iostream>

using namespace std;

int main(){
    int num = 57;
    cout << "the number is "<<num;
    num+=1;
    cout << "After post increment by 1 the number is : " << num <<'\n';
    num+=1;

    cout << "After pre increment by 1 the number is : "<< num<<'\n';
    num+=1;
    cout << "After increasing by 1 the number is : "<< num<<'\n';
    num-=1;
    cout << "After post decrement by 1 the number is : "<< num<<'\n';
    num-=1;
    cout << "After pre decrement by 1 the number is : "<< num<<'\n';
    num-=1;

    cout << "After decreasing by 1 the number is : "<< num<<'\n';


    return 0;
}