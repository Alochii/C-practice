#include <iostream>
#include <vector>
#include <math.h>




using namespace std;

vector<uint64_t> powers_of_two(int n){
  vector<uint64_t>power;
  for (int i = 0; i< n; i++){
    power.push_back(pow(2,i));
  }
  return power;

}
int main(){
 
return 0;
}