#include <iostream>
using namespace std;
class Printer
{
public:
    static std::string printerError(const std::string &s){
        int count{0};
        string output;
        for (int i=0; i<s.size();i++){
        if (s[i] <= 109 && s[i] >= 97){
            count ++;
        }
        }
        output = to_string(s.size()-count) +"/" + to_string(s.size());
        return output;
        }
};

int main(){
    string s="aaaxbbbbyyhwawiwjjjwwm";
    cout << Printer::printerError(s);
    return 0;
}