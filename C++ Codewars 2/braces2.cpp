#include <iostream>
using namespace std;
char returnopp(char sign){
    if (sign == '('){
        return ')';
    }
    else if (sign == '{'){
        return '}';
    }
    else if (sign == '['){
        return ']';
    }
    return 'x';
}
string erasebracket(string& str){
    for (int i=0; i<str.size(); i++){
        if (str[i+1] == returnopp(str[i])){
            str.erase(i,2);
            return str;
        }
    }
    return str;
}
bool valid_braces(std::string braces) 
{
    string tempstr = braces;
    for (int i=0; i<braces.size(); i++){
        erasebracket(tempstr);
    }
    if (tempstr.empty()) return true;
    return false;
}
bool checkbracket(const string str){
    string tempstr = str;
    for (int i=0; i<str.size(); i++){
        erasebracket(tempstr);
    }
    if (tempstr.empty()) return true;
    return false;
}
int main(){
    string str = "{[{{{{{[(())]}}}}}]}";
    cout << checkbracket(str);
    return 0;
}