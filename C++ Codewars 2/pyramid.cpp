#include <iostream>
#include <vector>
using namespace std;
std::vector<std::string> towerBuilder(unsigned nFloors) {
    string str;
    vector<string> output{};
    for (int i=0; i< nFloors; i++){
        str.clear();
        for (int j = 0 ; j < nFloors-i-1 ; j++){
            str.append(" ");
        }
        for (int j = 0; j < 1 + (i*2); j++){
            str.append("*");
        }
        for (int j = 0 ; j < nFloors-i-1 ; j++){
            str.append(" ");
        }
        output.push_back(str);
    }
  return output;
}
int main(){
    towerBuilder(3);
    
    return 0;
}