#include <iostream>
#include <vector>
using namespace std;
vector<string> testing (vector<string> strs){
    vector<string> strsout{};
    string temp {": "};
    string pushed{};
    for (int i=0; i<strs.size();i++){
        pushed = to_string(i+1) + temp +strs[i];
        strsout.push_back(pushed);
    }
    return strsout;
}
int main(){
    vector<string> strs = {"a","b", "ccccc"};
    
    return 0;
}