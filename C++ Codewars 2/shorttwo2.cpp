#include <vector>
#include <iostream>
using namespace std;
int getsmallest(vector<int> nums){
    int smol{nums[0]};
    int smallest{99};
    for (int i=0; i<nums.size();i++){
        if (nums[i] < smol){
            smol = nums[i];
        }
    }
    for (int i=0; i<nums.size();i++){
        if ((nums[i] < smallest) && (nums[i] > smol)){
                smallest = nums[i];
        }
    }
    return smol+smallest;
}

int main(){
    vector<int> nums = {2,1,3,4,5};
    cout << getsmallest(nums);
    return 0;
}