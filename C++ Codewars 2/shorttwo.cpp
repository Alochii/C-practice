#include <vector>
#include <iostream>
using namespace std;
int getsmallest(vector<int> nums){
    int smol{nums[0]};
    for (int i=0; i<nums.size();i++){
        if (nums[i] < smol){
            smol = nums[i];
        }
    }
    return smol;
}
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  long count{0};
  for (int i=0; i<2;i++){
    count += getsmallest(numbers);
    numbers.erase(numbers.begin(),numbers.begin()+1);

  }
    return count;
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    cout << sumTwoSmallestNumbers(nums);
    return 0;
}