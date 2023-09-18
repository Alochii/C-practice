#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

std::string add(const std::string& a, const std::string& b) {
    string first{a};
    string second{b};
    string output{};
    for (int j=0; j<2; j++){
        output.clear();
        if (a.size() < b.size()){
            first = b;
            second = a;
        }

        while (first.size() > second.size()){
            second.insert(0,1,'0');
        }
        //cout << first<<endl << second<<endl;

        int sum{0};
        for (int i= first.size() -1; i>= 0;i--){
            sum += first[i]+second[i] -96;
            if (sum > 9){
                sum -=10;
                //cout << sum<<endl;
                output.append(to_string(sum));
                sum =1;
                if (i == 0){
                    first.insert(0,1,'0');
                    second.insert(0,1,'0');
                } 
            }
            else{
                //cout << sum<<endl;
                output.append(to_string(sum));
                sum = 0;
                if (i == 0){
                    j++;
                }
            }
        }
    }
    reverse(output.begin(),output.end());
    return output;
}
int main(){
    string a = "1000000000000000000000000000000000000000000000000000000000000001";
    string b = "9000000000000000000000545484949499494498978545122000000000000101";
    cout << add(a,b);
    return 0;
}