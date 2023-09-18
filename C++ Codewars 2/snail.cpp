#include <iostream>
#include <vector>
using namespace std;

std::vector<int> snail(std::vector<std::vector<int>> &snail_map){
    std::vector<int> gridsnail{};
    int i = 0;
    int j = 0;
    int realsize = snail_map.size();
    int tempsize = realsize;
    while (tempsize > 0){
        for (int direction = 0; direction < 4; direction++){
            for (int square = 0; square < tempsize-1; square ++){
                cout << snail_map[i][j] << " ";
                gridsnail.push_back(snail_map[i][j]);
                switch (direction){
                    case 0 : j++;
                    break;
                    case 1 : i++;
                    break;
                    case 2 : j--;
                    break;
                    case 3 : i--;
                    break;
                }
            }
        }
        i++,j++;
        tempsize -=2;
    }
    if (tempsize == -1){
        cout << snail_map[realsize/2][realsize/2] << " ";
        gridsnail.push_back(snail_map[realsize/2][realsize/2]);
    }
    return gridsnail;
}
int main(){
    std::vector<std::vector<int>> grid3 = {{1,2,3,4,17}, {12,13,14,5,18}, {11,16,15,6,19},{10,9,8,7,20},{21,22,23,24,25}};
    std::vector<std::vector<int>> grid2 = {{1,2,3,4}, {12,13,14,5}, {11,16,15,6},{10,9,8,7}};
    std::vector<std::vector<int>> grid1 = {{1,2,3}, {8,9,4}, {7,6,5}};
    std::vector<std::vector<int>> grid0 = {{1,2}, {12,13}};
    std::vector<std::vector<int>> gridone = {{}};
    cout << gridone[0].empty();    
    snail(gridone);
    return 0;
}