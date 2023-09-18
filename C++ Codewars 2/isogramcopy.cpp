#include <string>
#include <vector>
#include <iostream>
using namespace std;
int FindOutlier(std::vector<int> arr)
{
    int trackOdd{0};
    int trackEven{0};
    for (int i=0; i<arr.size();i++){
        if (arr[i] % 2 == 0){
            trackEven++;
        }
        else{
            trackOdd++;
        }
        cout << "1 :"<<trackEven<<endl<<"2 :"<<trackOdd<<endl;

    }
    int tracksign;
    trackOdd == 1? tracksign = 1 : tracksign = 0;
    for (int i=0; i<arr.size(); i++){

        if (arr[i] % 2== tracksign){
            cout << i;
            return arr[i];
        }
    }
    return arr[0];
}
int main(){
    cout << FindOutlier({2, -6, 8, -10, -3});
    return 0;
}