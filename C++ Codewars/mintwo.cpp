#include <vector>
#include <iostream>
using namespace std;

long TS(std::vector<int> numbers)
{
    vector <int> nums = numbers;
    int min1 =numbers[4] , min2, track;
    for (int i = 0; i < numbers.size(); i++){
      if (min1 > numbers[i]){
        min1 = numbers[i];
        track= i;
      }
    }
    nums.erase(1);
    for (int i = 0; i < nums.size(); i++){
      if (min1 > nums[i]){
        min2 = nums[i];
      }
    }
    return min1+min2;
}
int main(){

    cout << TS ({1,2,3,4,5});

    return 0;
}
