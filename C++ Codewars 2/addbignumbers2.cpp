#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

std::string add(const std::string& a, const std::string& b) {
    string first{a};
    string second{b};
    string output{};
    bool check;
    do{
    if (a.size() < b.size()){
        first = b;
        second = a;
    }
    while (first.size() > second.size()){
        second.insert(0,1,'0');
    }
    if (check == true){
        first.insert(0,1,'0');
        second.insert(0,1,'0');
    }
    check = false;
    cout << first<<endl;
    cout << second<<endl;
    int sum{0};
    for (int i= first.size() -1; i>= 0;i--){
        sum += first[i]+second[i] -96;
        if (sum > 9){
            
            sum -=10;
            cout << sum<<endl;
            output.append(to_string(sum));
            sum =1; 
            if (i==0){
                cout << "we haave to do this again"<<endl;
                check == true;
            }
        }
        else{
            cout << sum<<endl;
            output.append(to_string(sum));
            sum = 0;
            
        }
    }
    }while(check == true);
    reverse(output.begin(),output.end());
    cout << output<<endl;
    return output;
}
int main(){
    string a = "99";
    string b = "2";
    cout << add(a,b);
    return 0;
}