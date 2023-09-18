#include <iostream>
#include <vector>
using namespace std;
std::vector<int> arrerase(vector<int> &arrays,int index, int repetitions){
    int count{0};
    for (int i=0; i<arrays.size();i++){
        if (arrays[index] == arrays[i]){
            count ++;
            if (count > repetitions){
                arrays.erase(arrays.begin()+i,arrays.begin()+i+1);
                i--;
            }
        }
    }
    return arrays;
}
std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    vector<int> arrays = arr;
    for (int i=0; i<arrays.size(); i++){
        arrerase(arrays,i,n);
    }
    return arrays;
}

int main(){
    vector<int> arr = {20,37,20,21};
    vector<int> array2 = {45 ,44 ,15 ,15 ,15 ,8 ,34 ,34 ,4 ,44 ,45 ,34 ,8 ,34 ,34 ,44 ,15 ,22 ,4 ,15 ,8 ,44 ,15 ,34 ,8 ,8 ,45 ,4 ,44 ,22 ,44 ,34 ,22 ,45 ,44 ,34 ,34 ,44 ,8 ,22 ,15 ,8 ,34 ,22 ,15 ,34 ,4 ,34 ,34 ,44 ,34 ,44 ,8 ,34 ,8 ,34};
    arr = deleteNth(array2,1);
    
    for (int i=0; i<arr.size();i++){
        cout << arr[i]<<" ";
    }
    return 0;
}