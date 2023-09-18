#include <iostream>
#include <vector>
#include <utility>
using namespace std;
unsigned int number(const std::vector<std::pair<int, int>>& busStops){
    int track{0}; 
    for (int i=0; i<busStops.size();i++){
        track += busStops[i].first;
        track -= busStops[i].second;
    }
    return track;
}
int main(){
    vector<pair<int,int>> busStops = {{10,0},{13,0},{27,10},{5,40}};
    cout <<number(busStops);
    return 0;
}