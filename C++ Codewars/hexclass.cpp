#include <iostream>

using namespace std;
class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b){
        return addstring(hexadecimal(r),hexadecimal(g),hexadecimal(b));
    }
    static string hexadecimalvalue(int val){
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
    static string addstring(string first, string second){
    return first+second;
}
    static string addstring(string first, string second, string third) {
    return first+second+third;
}
    static string hexadecimal(int num){
    int x = num / 16;
    int y = num % 16;
    return addstring(hexadecimalvalue(x),hexadecimalvalue(y));
}
};



int main(){
    cout << RGBToHex::rgb(255,255,255);
    return 0;
}