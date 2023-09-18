#include <iostream>
#include <vector>
using namespace std;
std::string odd_or_even(const std::vector<int> &arr){
    int sum{0};
    for (int i=0; i<arr.size();i++){
        sum += arr[i];
    }
    return (sum % 2 == 0? "even" : "odd");
}
int main(){
    vector<int> arr = {0,-1,-5};
    cout <<odd_or_even(arr);
    return 0;
}