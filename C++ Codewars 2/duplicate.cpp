#include <iostream>
using namespace std;
int main(){
    string str = "reved";
    string output = str;
    for (int i=0; i<str.length(); i++){
        for (int j=0; j<str.length(); j++){
            if ((str[i] == str[j]) && (i != j)){
                cout << j;
                output[j] = ')';
            }
            else{
                output[i] = '(';
            }
        }
        cout <<"big cycle"<<endl;
    }
    cout << output;
    return 0;
}