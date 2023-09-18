#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {0,0};
    int first{nums[0]};
    int second;
    second = (nums[0] < nums[1] ? nums[1] : nums[0]);
    for (int i=0; i<nums.size();i++){
        if (first > nums[i]){
            first = nums[i];
        }
    }
    for (int i=0; i<nums.size();i++){
        if (second > nums[i] && first < nums[i]){
            second = nums[i];
        }
    }
    cout << first<<endl<<second<<endl;
    cout << first+second;
    return 0;
}