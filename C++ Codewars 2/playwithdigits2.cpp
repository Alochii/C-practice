#include <iostream>
#include <cmath>
using namespace std;
int playdigits(int num, int p){
    string str = to_string(num);
    int tracker{0}; 
    for (int i=0; i<str.length();i++){
        tracker += pow(str[i]-'0',p+i);
        cout << "i"<<pow(str[i]-'0',p+i)<<" , tracker : "<<tracker<<endl;

    }
    return tracker % num == 0? tracker /num : -1; 
}
int main(){
    cout << playdigits(46288,3);
    
    return 0;
}