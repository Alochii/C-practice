#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string str = "1 2 3 4 -5 67 7 69";
    vector<int> vect{};
    int size = str.length();
    int output{};
    int signcheck{};
    for (int i=0; i<size; i+=2){
        output = 0;
        signcheck = 1;
        if (str[i] == '-'){
            i++;    
            signcheck = -1;
        }
        if ((str[i+1] != ' ') && (i != size - 1 )){
            output = ((str[i] - '0') *10 ) + (str[i+1] -'0');
            i++;
        }
        else{
            output = str[i] - '0';
        }
        vect.push_back(output * signcheck);
    }
    std::sort(vect.begin(),vect.end());
    cout << vect[0] << " " << vect[vect.size()-1];
    return 0;
}