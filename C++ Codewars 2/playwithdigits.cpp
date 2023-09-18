#include <iostream>
#include <cmath>
using namespace std;
int playdigits(int num){
    string str = to_string(num);
    int tracker{0};                      
    for (int i=0; tracker >= 0 ; i++){
        tracker = 0;
        for (int j = 0; j < str.length(); j++){
            tracker += pow(str[j]-'0',(i+j));
            //cout << "str "<< str[j]<<" , j = "<< j<<" , i+j= "<< i+j<< endl;
            //cout << tracker << endl;
        }
        if (tracker % num == 0){
            return tracker / num;
        }
    }
    return -1;
}
int main(){
    cout << playdigits(89);
    
    return 0;
}