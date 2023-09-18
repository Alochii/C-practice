#include <iostream>
#include <string>
using namespace std;
std::string add(const std::string& a, const std::string& b) {
  return "no";
}
int main(){
    string a = "1251";
    string b = "456";
    int vala{0};
    int valb{0};
    int output{0};
    for (int i=b.size()-1; i >= 0; i--){

        output += a[i+(a.size() - b.size())] + b[i] -(2 *'0');
        if (output >= 10){
            output = a[i] + b[i] -(2 *'0') - 10;
            cout << output<<endl;
            output = 1;
        }
        else{
            cout << output << endl;
            output = 0;
        }

    }
    return 0;
}