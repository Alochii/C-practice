#include <iostream>

using namespace std;

string hexadecimalvalue(int val){
    string st;
    if (val < 0){
        st = "0";
    }
    else if (val < 10){
        st = to_string(val);
    }
    else if (val >= 10){
        switch (val){
            case 10: st = "A";
            break;
            case 11: st = "B";
            break;
            case 12: st = "C";
            break;
            case 13: st = "D";
            break;
            case 14: st = "E";
            break;
            default : st = "F";
        }
    }
    return st;
}
string addstring(string first, string second){
    return first+second;
}
string addstring(string first, string second, string third) {
    return first+second+third;
}
string hexadecimal(int num){
    int x = num / 16;
    int y;
    if (x >= 16){
        y=15;
    }
    else if (x <= 0){
        y = 0;
    }
    else {
        y = num % 16;
    }
    return addstring(hexadecimalvalue(x),hexadecimalvalue(y));
}

int main(){
    addstring(hexadecimal(150),hexadecimal(257),hexadecimal(270));





    
    return 0;
}